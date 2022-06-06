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
	bool m_available{ false };

	UPROPERTY()
	UPlayerAttr* m_impact;

public:
	UEventOption();
	bool checkAvailable(UPlayerAttr player_attr);

	UFUNCTION(BlueprintCallable, Category = "Game")
		FString getName();

	UFUNCTION(BlueprintCallable, Category = "Game")
		FString getDescribe();

	void setUpData();

};
