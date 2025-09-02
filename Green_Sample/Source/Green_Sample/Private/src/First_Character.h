// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "First_Character.generated.h"

/**Classes to be included*/
class UCameraComponent;
class UPaperFlipbookComponent;
class UPaperSpriteComponent;
class UPaperFlipbook;
class USpringArmComponent;
class UInputAction;
struct FInputActionValue;
class UInputMappingContext;

UCLASS()
class AFirst_Character : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess="true"))
	UCameraComponent* Camera;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess="true"))
	USpringArmComponent* SpringArm;

	/**State*/
protected:
	//Movement
	bool bWasGrounded= false;
	bool bIsDashing = false;
	float LandPlayTime = 0.12f;

	float CoyoteTimer = 0.f;
	float JumpBufferTimer = 0.f;
	float SavedBrakingFriction = 2.f;
	float DropThrough = .35f;

	//MultiJump
	float DropValue = 0.f;
	float SoftCollisionTraceDistance = 1000.0f;
	float ShortHop = .5f;

	//Dash
	float DashSpeed = 1000.f;
	float DashDuration = 0.2f;
	float DashFrictionAf = 2.f;


	FTimerHandle DashTimerHandle;

/**To Initialize the Paper*/
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbookComponent* Sprite;

	UPROPERTY(EditAnywhere, Category = "Sprite")
	UPaperFlipbook* Fb_Idle;

	UPROPERTY(EditAnywhere, Category = "Sprite")
	UPaperFlipbook* Fb_Walk;

/**Initialize Input*/
protected:
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* DashAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* InteractAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* DropAction;

protected:

	UPROPERTY(EditAnywhere, Category = "VALUE")
	TEnumAsByte<ECollisionChannel> SoftCollisionObjectType;

	UPROPERTY()
	AActor* LastFloorActor = nullptr;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* DefaultMappingContext;

public:
	// Sets default values for this character's properties
	AFirst_Character();

	/**Called to begin the play*/
	virtual void BeginPlay() override;

	/**Called to end and cleanup*/
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetSoftCollision(bool bEnabled);

	void RefreshLastFloorActor();


/**Calling Action*/
protected:

	/**Called for movement input*/
	void Move(const FInputActionValue& Value);
	
	/**Called for Jump Action*/
	void Drop(const FInputActionValue& Value);

	/**Called for multiple Jumps*/
	void MultiJump();

	/**Called for Soft Collision*/
	void CheckForSoftCollision();

public:

	//called move input
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoMove(float Forward);

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoDrop(float Value);

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpStart();

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpStop();

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoDashStart();

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoDashStop();


};
