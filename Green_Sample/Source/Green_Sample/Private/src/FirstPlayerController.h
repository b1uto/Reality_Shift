// First_PlayerController.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "FirstPlayerController.generated.h"

UCLASS()
class AFirstPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AFirstPlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

	/** If you prefer the controller to own the mapping context, assign it here in the editor. */
	UPROPERTY(EditDefaultsOnly, Category = "Enhanced Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext = nullptr;

	/** Priority when adding the mapping context. 0 is fine if you don’t layer others. */
	UPROPERTY(EditDefaultsOnly, Category = "Enhanced Input")
	int32 MappingPriority = 0;

	/** Optional mouse settings */
	UPROPERTY(EditDefaultsOnly, Category = "Input|Mouse")
	bool bLockMouseToViewport = true;

	UPROPERTY(EditDefaultsOnly, Category = "Input|Mouse")
	bool bShowMouse = false;

private:
	void ApplyInputMode();
	void AddMappingContextIfNeeded();
	void RemoveMappingContextIfNeeded();

	/** Track if we added the context so we can remove it safely on unpossess. */
	bool bMappingAddedByController = false;
};
