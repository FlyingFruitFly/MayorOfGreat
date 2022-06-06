// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "EventManager.h"
#include "MayorOfGreatGameMode.generated.h"

UCLASS(minimalapi)
class AMayorOfGreatGameMode : public AGameModeBase
{
	GENERATED_BODY()

	UEventManager* m_event_manager;
public:
	AMayorOfGreatGameMode();
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "UMG Game")
	void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
		TSubclassOf<UUserWidget> StartingWidgetClass;

	UPROPERTY()
		UUserWidget* CurrentWidget;
};



