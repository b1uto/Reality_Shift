// First_PlayerController.cpp
#include "FirstPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/PlayerState.h"
#include "Engine/LocalPlayer.h"

AFirstPlayerController::AFirstPlayerController()
{
	// Typical TPS/FPS defaults
	bShowMouseCursor = bShowMouse;
}

void AFirstPlayerController::BeginPlay()
{
	Super::BeginPlay();
	ApplyInputMode();

	// If you want controller to own input layers, do it here
	AddMappingContextIfNeeded();
}

void AFirstPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	ApplyInputMode();
	AddMappingContextIfNeeded();
}

void AFirstPlayerController::OnUnPossess()
{
	RemoveMappingContextIfNeeded();
	Super::OnUnPossess();
}

void AFirstPlayerController::ApplyInputMode()
{
	if (IsLocalController())
	{
		FInputModeGameOnly GameOnlyMode;
		if (bLockMouseToViewport)
		{
			GameOnlyMode.SetConsumeCaptureMouseDown(true);
		}
		SetInputMode(GameOnlyMode);

		bShowMouseCursor = bShowMouse;
	}
}

void AFirstPlayerController::AddMappingContextIfNeeded()
{
	// If your Character already adds the mapping context in BeginPlay,
	// you can skip this entirely or remove it there and keep it here.
	if (!IsLocalController())
	{
		return;
	}

	ULocalPlayer* LP = GetLocalPlayer();
	if (!LP) return;

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LP))
	{
		if (DefaultMappingContext)
		{
			Subsystem->AddMappingContext(DefaultMappingContext, MappingPriority);
			bMappingAddedByController = true;
		}
	}
}

void AFirstPlayerController::RemoveMappingContextIfNeeded()
{
	if (!bMappingAddedByController)
	{
		return;
	}

	if (ULocalPlayer* LP = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LP))
		{
			if (DefaultMappingContext)
			{
				Subsystem->RemoveMappingContext(DefaultMappingContext);
			}
		}
	}
	bMappingAddedByController = false;
}
