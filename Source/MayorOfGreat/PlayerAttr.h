#pragma once
#include "SupportAttr.h"
#include "FavorAttr.h"
#include "GameFramework/Character.h"
#include "PlayerAttr.generated.h"

UCLASS(config = Game)
class UPlayerAttr :public UClass
{
	GENERATED_BODY()

	int32 m_charm;
	int32 m_wealth;
	int32 m_political_tendency;
	int32 m_express;
	USupportAttr m_support;
	UFavorAttr m_favor;

public:
	UFUNCTION(BlueprintCallable, Category = "Game")
		int32 getCharm();

	UFUNCTION(BlueprintCallable, Category = "Game")
		int32 getWealth();

	UFUNCTION(BlueprintCallable, Category = "Game")
		int32 getPoliticalTendency();

	UFUNCTION(BlueprintCallable, Category = "Game")
		int32 getExpress();

	UFUNCTION(BlueprintCallable, Category = "Game")
		USupportAttr* getSupport();

	UFUNCTION(BlueprintCallable, Category = "Game")
		UFavorAttr* getFavor();

	void add(const UPlayerAttr& other);
};

