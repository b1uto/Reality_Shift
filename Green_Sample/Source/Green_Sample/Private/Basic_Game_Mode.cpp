 // Fill out your copyright notice in the Description page of Project Settings.


#include "Basic_Game_Mode.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "src/First_Character.h"

ABasic_Game_Mode::ABasic_Game_Mode()
{
	DefaultPawnClass = AFirst_Character::StaticClass();
	PlayerControllerClass = APlayerController::StaticClass();
}

void ABasic_Game_Mode::StartPlay()
{
	Super::StartPlay();

	UE_LOG(LogTemp, Log, TEXT("GameMode: StartPlay() — match is starting."));
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 4.0f, FColor::Green,
			TEXT("Hello from GameMode (StartPlay)"));
	}
}
