// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Basic_Game_Mode.generated.h"

/**
 * 
 */
UCLASS()
class ABasic_Game_Mode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ABasic_Game_Mode();

	//called when the game starts
	virtual void StartPlay() override;
};
