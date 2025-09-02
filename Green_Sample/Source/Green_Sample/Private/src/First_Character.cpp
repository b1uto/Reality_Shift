// Fill out your copyright notice in the Description page of Project Settings.


#include "src/First_Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Components/InputComponent.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"


// Sets default values
AFirst_Character::AFirst_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Componennts
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->TargetArmLength = 900.f;
	SpringArm->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 15.f;
	SpringArm->bDoCollisionTest = false;

	//Camera Component
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	//Keep Rotation Manual
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//Hide Inherited Mesh
	GetMesh()->SetHiddenInGame(true);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetComponentTickEnabled(false);
	GetMesh()->SetSkeletalMesh(nullptr);
	GetMesh()->SetAnimInstanceClass(nullptr);


	//Paper Flipbook Component
	UCharacterMovementComponent* MoveComp = GetCharacterMovement();
	MoveComp->bOrientRotationToMovement = false;
	MoveComp->SetPlaneConstraintEnabled(true);
	MoveComp->SetPlaneConstraintNormal(FVector(0.f, 1.f, 0.f));
	MoveComp->bConstrainToPlane = true;
	MoveComp->RotationRate = FRotator(0.f, 720.f, 0.f);

	MoveComp->JumpZVelocity = 600.f;
	MoveComp->AirControl = 0.7f;
	MoveComp->GravityScale = 1.f;
	MoveComp->BrakingDecelerationWalking = 2000.f;
	MoveComp->MaxWalkSpeed = 600.f;

	GetCapsuleComponent()->InitCapsuleSize(32.f, 88.f);
}

void AFirst_Character::BeginPlay()
{
	Super::BeginPlay();
	if(APlayerController* LocalPlayer_Controller = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer_Controller->GetLocalPlayer()))
		{
			if (DefaultMappingContext)
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
		}
	}
}

void AFirst_Character::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearTimer(DashTimerHandle);
}

// Called to bind functionality to input
void AFirst_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (MoveAction)
		{
			EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFirst_Character::Move);
			EnhancedInput->BindAction(MoveAction, ETriggerEvent::Completed, this, &AFirst_Character::Move);
		}
		if (JumpAction)
		{
			EnhancedInput->BindAction(JumpAction, ETriggerEvent::Started, this, &AFirst_Character::DoJumpStart);
			EnhancedInput->BindAction(JumpAction, ETriggerEvent::Completed, this, &AFirst_Character::DoJumpStop);
		}
		if (DropAction)
		{
			EnhancedInput->BindAction(DropAction, ETriggerEvent::Triggered, this, &AFirst_Character::Drop);
		}
		if (DashAction)
		{
			EnhancedInput->BindAction(DashAction, ETriggerEvent::Started, this, &AFirst_Character::DoDashStart);
			EnhancedInput->BindAction(DashAction, ETriggerEvent::Completed, this, &AFirst_Character::DoDashStop);
		}
	}

}

void AFirst_Character::SetSoftCollision(bool bEnabled)
{
	GetCapsuleComponent()->SetCollisionResponseToChannel(SoftCollisionObjectType, bEnabled ? ECR_Ignore : ECR_Block);
}

void AFirst_Character::RefreshLastFloorActor()
{
	if (const FFindFloorResult& Floor = GetCharacterMovement()->CurrentFloor; Floor.bBlockingHit)
	{
		LastFloorActor = Floor.HitResult.GetActor();
	}
	else
	{
		LastFloorActor = nullptr;
	}
}

void AFirst_Character::Move(const FInputActionValue& Value)
{
	const FVector2D MoveAxis = Value.Get<FVector2D>();
	DoMove(MoveAxis.Y);
}

void AFirst_Character::Drop(const FInputActionValue& Value)
{
	const float DropAxis = Value.Get<float>();
	DoDrop(DropAxis);
}

void AFirst_Character::MultiJump()
{
	if (!GetCharacterMovement()->IsFalling())
	{
		Jump();
		return;
	}
}

void AFirst_Character::CheckForSoftCollision()
{
	DropValue = 0.0f;

	FHitResult OutHit;

	const FVector Start = GetActorLocation();
	const FVector End = Start + (FVector::DownVector * SoftCollisionTraceDistance);

	FCollisionObjectQueryParams ObjectParams;
	ObjectParams.AddObjectTypesToQuery(SoftCollisionObjectType);

	if (OutHit.GetActor())
	{
		SetSoftCollision(true);
	}
}

void AFirst_Character::DoMove(float Forward)
{
	if (FMath::IsNearlyZero(Forward, KINDA_SMALL_NUMBER)) return;

	AddMovementInput(FVector::ForwardVector, Forward);
	
	FRotator R = GetActorRotation();
	R.Yaw = (Forward > 0.f) ? 0.f : 180.f;
	SetActorRotation(R);
}

void AFirst_Character::DoDrop(float Value)
{
	DropValue = Value;

	if (Value > 0.f && GetCharacterMovement()->IsMovingOnGround())
	{
		RefreshLastFloorActor();
		if (LastFloorActor)
		{
			// Ignore floor and nudge down to break contact
			GetCapsuleComponent()->IgnoreActorWhenMoving(LastFloorActor, true);
			AddActorWorldOffset(FVector(0, 0, -2.f), true);

			FTimerHandle TempHandle;
			GetWorld()->GetTimerManager().SetTimer(TempHandle, [this]()
				{
					if (LastFloorActor)
					{
						GetCapsuleComponent()->IgnoreActorWhenMoving(LastFloorActor, false);
						LastFloorActor = nullptr;
					}
				}, DropThrough, false);
		}
	}
}


void AFirst_Character::DoJumpStart()
{
	MultiJump();
}

void AFirst_Character::DoJumpStop()
{
	UCharacterMovementComponent* Move = GetCharacterMovement();
	if (Move && Move->Velocity.Z > 0.f) {
		FVector V = Move->Velocity;
		V.Z *= FMath::Clamp(ShortHop, 0.f, 1.f);
		Move->Velocity = V;
	}

}

void AFirst_Character::DoDashStart()
{
	UCharacterMovementComponent* Move = GetCharacterMovement();
	if (!Move) return;

	// Face-based direction using actor yaw (0 = right, 180 = left)
	const float Yaw = GetActorRotation().Yaw;
	const float Dir = (FMath::Cos(FMath::DegreesToRadians(Yaw)) >= 0.f) ? +1.f : -1.f;

	SavedBrakingFriction = Move->BrakingFrictionFactor;
	Move->BrakingFrictionFactor = 0.f;

	LaunchCharacter(FVector(DashSpeed * Dir, 0.f, 0.f), true, false);

	GetWorld()->GetTimerManager().SetTimer(
		DashTimerHandle, this, &AFirst_Character::DoDashStop, DashDuration, false);
}

void AFirst_Character::DoDashStop()
{
	if (UCharacterMovementComponent* Move = GetCharacterMovement()) {
		Move->BrakingFrictionFactor = DashFrictionAf;
	}
	GetWorld()->GetTimerManager().ClearTimer(DashTimerHandle);
}

