// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Camera/CameraComponent.h"
#include "PixelSnapMovement.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GREEN_SAMPLE_API UPixelSnapMovement : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPixelSnapMovement();

	/**Enable/disable snapping at runtime*/
public:
	/**Enable/disable pixel snapping movement*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PixelSnap")
	bool bIsEnabled = true;

	/**Pixel steps for each movement step*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PixelSnap", meta = (ClampMin = "1.0", UIMin = "1.0"))
	float PixelSteps = 10.0f;

	/**Camera override, if null it will use the player camera manager*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PixelSnap")
	TObjectPtr<UCameraComponent> CameraOverride = nullptr;

	/**Min depth to start snapping, if the distance is smaller than this it will snap instantly*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PixelSnap", meta = (ClampMin = "1.0", UIMin = "1.0"))
	float MinDepth = 10.0f;

	/**Min speed to move, if the distance is smaller than this it will snap instantly*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PixelSnap", meta = (ClampMin = "1.0", UIMin = "0.0"))
	float MinSpeed = 1.0f;

	/**Lerp alpha for smooth movement, 0 is instant, 1 is no movement*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PixelSnap", meta = (ClampMin = "1.0", UIMin = "0.0"))
	float LerpAlpha = 0.0f;

	/**Sweep to keep collision*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PixelSnap")
	bool bSweepOnMove = true;

	/**Called to enable/disable snapping*/
	UFUNCTION(BlueprintCallable, Category = "PixelSnapMovement")
	void SetEnabled(bool bEnable) { bIsEnabled = bEnable; }

	/**Change pixel steps for each step*/
	UFUNCTION(BlueprintCallable, Category = "PixelSnapMovement")
	void SetPixelSteps(float InPixels) { PixelSteps = InPixels; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//Called when component is registered
	virtual void TickComponent(float DeltaTime, enum ELevelTick Ticktype, FActorComponentTickFunction* TickFunction) override;

private:
	bool ResolveCamera(FVector& OutCamLoc, FRotator& OutCamRot, float& OutFOVYRad, int32& OutViewPort, int32& OutViewPortH) const;
	static FVector ReConstructWorldPosition(const FVector& CamLoc, const FRotationMatrix& CamBasis, const FVector& OwnerWorldPos, float Depth, float StepWorld);

	static float WorldToScreenPixel(const float FOVYRad, const int32 ViewPortH, const float Depth);

};