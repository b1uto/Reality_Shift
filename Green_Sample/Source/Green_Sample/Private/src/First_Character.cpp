// Fill out your copyright notice in the Description page of Project Settings.


#include "src/First_Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "Components/InputComponent.h"
#include "InputAction.h"
#include "InputmappingContext.h"
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

	//Movement defaults for player
	GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -88.f));
	GetMesh()->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));

	UCharacterMovementComponent* MoveComp = GetCharacterMovement();
	MoveComp->bOrientRotationToMovement = false;
	MoveComp->RotationRate = FRotator(0.f, 720.f, 0.f);

	MoveComp->JumpZVelocity = 600.f;
	MoveComp->AirControl = 0.7f;
	MoveComp->GravityScale = 1.f;
	MoveComp->BrakingDecelerationWalking = 2000.f;
	MoveComp->MaxWalkSpeed = 600.f;
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

void AFirst_Character::Dash(const FInputActionValue& Value)
{
	const float DashAxis = Value.Get<float>();
	DoDashStart();
}

void AFirst_Character::DoMove(float Forward)
{
	if (FMath::IsNearlyZero(Forward, KINDA_SMALL_NUMBER)) return;

	AddMovementInput(FVector::ForwardVector, Forward);
	
}

void AFirst_Character::DoDrop(float Value)
{
}

void AFirst_Character::DoJumpStart()
{
}

void AFirst_Character::DoJumpStop()
{
}

void AFirst_Character::DoDashStart()
{
}

void AFirst_Character::DoDashStop()
{
}

