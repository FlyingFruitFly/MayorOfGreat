// Copyright Epic Games, Inc. All Rights Reserved.

#include "MayorOfGreatGameMode.h"
#include "MayorOfGreatCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMayorOfGreatGameMode::AMayorOfGreatGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AMayorOfGreatGameMode::BeginPlay()
{
	Super::BeginPlay();
    m_event_manager = NewObject<UEventManager>(this, UEventManager::StaticClass());
	ChangeMenuWidget(StartingWidgetClass);
}

void AMayorOfGreatGameMode::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
    if (CurrentWidget != nullptr)
    {
        CurrentWidget->RemoveFromViewport();
        CurrentWidget = nullptr;
    }
    if (NewWidgetClass != nullptr)
    {
        CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
        if (CurrentWidget != nullptr)
        {
            CurrentWidget->AddToViewport();
        }
    }
}
