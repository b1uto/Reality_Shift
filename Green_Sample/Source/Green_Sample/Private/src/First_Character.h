// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "First_Character.generated.h"

/**Classes to be included*/
class UCameraComponent;
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
	bool bWasGrounded= false;

	float CoyoteTimer = 0.f;
	float JumpBufferTimer = 0.f;
	float SavedBrakingFriction = 2.f;

	FTimerHandle DashTimerHandle;
	 

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

public:
	// Sets default values for this character's properties
	AFirst_Character();

	/**Called to end and cleanup*/
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


/**Calling Action*/
protected:

	/**Called for movement input*/
	void Move(const FInputActionValue& Value);
	
	/**Called for Jump Action*/
	void Drop(const FInputActionValue& Value);

	/**Called for Dash Action*/
	void Dash(const FInputActionValue& Value);

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
