#pragma once
#include "GameFramework/Character.h"
#include "PlayerAttr.h"
#include "EventOption.generated.h"

UCLASS(config = Game)
class UEventOption :public UClass
{
	GENERATED_BODY()

	FString m_name;
	FString m_describe;
	UPlayerAttr m_impact;
	bool m_available{ false };

public:
	bool checkAvailable(UPlayerAttr player_attr);

	UFUNCTION(BlueprintCallable, Category = "Game")
		FString getName();

	UFUNCTION(BlueprintCallable, Category = "Game")
		FString getDescribe();

};
