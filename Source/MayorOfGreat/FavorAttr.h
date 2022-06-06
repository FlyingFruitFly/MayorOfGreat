#pragma once
#include "GameFramework/Character.h"
#include "FavorAttr.generated.h"

UCLASS(config = Game)
class UFavorAttr :public UClass
{
	GENERATED_BODY()

	int32 m_press;
	int32 m_gang;
	int32 m_politician;
	int32 m_celebrity;

public:
	UFUNCTION(BlueprintCallable, Category = "Game")
		int32 getPress();

	UFUNCTION(BlueprintCallable, Category = "Game")
		int32 getGane();

	UFUNCTION(BlueprintCallable, Category = "Game")
		int32 getPolitician();

	UFUNCTION(BlueprintCallable, Category = "Game")
		int32 getCelebrity();

	void add(const UFavorAttr& other);
};

