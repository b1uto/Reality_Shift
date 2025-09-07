// Fill out your copyright notice in the Description page of Project Settings.


#include "PixelSnapMovement.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/World.h"
#include "Engine/GameViewportClient.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UPixelSnapMovement::UPixelSnapMovement()
{
	
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickGroup = TG_PostPhysics; //after movement physics
}


// Called when the game starts
void UPixelSnapMovement::BeginPlay()
{
	Super::BeginPlay();
	
}

void UPixelSnapMovement::TickComponent(float DeltaTime, ELevelTick Ticktype, FActorComponentTickFunction* TickFunction)
{
	Super::TickComponent(DeltaTime, Ticktype, TickFunction);

	if (!bIsEnabled) return;

	AActor* Owner = GetOwner();
	if (!Owner) return;

	if (MinSpeed > 0.0f)
	{
		const float Speed = GetActorVelocitySafe(Owner).Size();
		if (Speed < MinSpeed) return;
	}

	FVector CamLoc;
	FRotator CamRot;
	float FOVYRad = 0.0f;
	int32 ViewPortW = 0;
	int32 ViewPortH = 0;
	if (!ResolveCamera(CamLoc, CamRot, FOVYRad, ViewPortW, ViewPortH)) return;

	const FVector OwnerWorldPos = Owner->GetActorLocation();

	//Camera basis
	const FRotationMatrix CamBasis(CamRot);
	const FVector CamForward = CamBasis.GetScaledAxis(EAxis::X);
	const FVector CamRight = CamBasis.GetScaledAxis(EAxis::Y);
	const FVector CamUp = CamBasis.GetScaledAxis(EAxis::Z);

	const FVector ToObj = OwnerWorldPos - CamLoc;
	const float Depth = FVector::DotProduct(ToObj, CamForward);

	if (Depth <= (MinDepth * 0.01f)) return; //too close, snap instantly

	/**Compute World units per pixel at this depth*/
	const float WorldPerPixel = WorldToScreenPixel(FOVYRad, ViewPortH, Depth);
	const float StepWorld = FMath::Max(0.0001f, WorldPerPixel * FMath::Max(1.0f, PixelSteps));

	/**Projects Camera-Space*/
	const FVector CamToSnap = ToObj - CamRight * (FVector::DotProduct(ToObj, CamRight)) - CamUp * (FVector::DotProduct(ToObj, CamUp));

	/**Raw Components*/
	const float RightComp = FVector::DotProduct(CamToSnap, CamRight);
	const float UpComp = FVector::DotProduct(CamToSnap, CamUp);

	auto SnapComponent = [&](float V, float Step) {
		return Step * FMath::RoundToFloat(V / Step);
		};

	const float SnappedRight = SnapComponent(RightComp, StepWorld);
	const float SnappedUp = SnapComponent(UpComp, StepWorld);

	const FVector SnappedCamToObj = CamForward * Depth + CamRight * SnappedRight + CamUp * SnappedUp;

	FVector FinalWorldPos = SnappedCamToObj;
	if(LerpAlpha>0.f && LerpAlpha<1.f)
	{
		FinalWorldPos = FMath::Lerp(OwnerWorldPos, SnappedCamToObj + CamLoc, 1.0f - LerpAlpha);
	}
	else return; //no lerp, no movement
	
	Owner->SetActorLocation(FinalWorldPos + CamLoc, bSweepOnMove);
	
}


static FVector GetActorVelocitySafe(const AActor* Actor)
{
	if (!Actor) return FVector::ZeroVector;
	return Actor->GetVelocity();
}


bool UPixelSnapMovement::ResolveCamera(FVector& OutCamLoc, FRotator& OutCamRot, float& OutFOVYRad, int32& OutViewPort, int32& OutViewPortH) const
{
	return false;
}

FVector UPixelSnapMovement::ReConstructWorldPosition(const FVector& CamLoc, const FRotationMatrix& CamBasis, const FVector& OwnerWorldPos, float Depth, float StepWorld)
{
	return FVector();
}

float UPixelSnapMovement::WorldToScreenPixel(const float FOVYRad, const int32 ViewPortH, const float Depth)
{
	return 0.0f;
}
