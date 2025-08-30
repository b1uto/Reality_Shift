// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstCharacter.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimInstance.h"
#include "CoreMinimal.h"

AFirstCharacter::AFirstCharacter()
{

	PrimaryActorTick.bCanEverTick = true;
}

void AFirstCharacter::Move(const FInputActionValue& Value)
{

}

// Called to bind functionality to input
void AFirstCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

