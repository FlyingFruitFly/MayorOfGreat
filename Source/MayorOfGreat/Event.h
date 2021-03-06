#pragma once

#include "GameFramework/Character.h"
#include "PlayerAttr.h"
#include "EventOption.h"
#include "Event.generated.h"

UCLASS(config = Game)
class UEvent:public UClass
{
	GENERATED_BODY()

	FString m_event_name;
	int32 m_begin_date;
	int32 m_final_date;
	FString m_describe;
	FString m_label;
	FString m_talker;

	UPROPERTY()
	TArray<UEventOption*> m_options;

public:
	UEvent();
	~UEvent();
	UFUNCTION(BlueprintCallable, Category = "Game")
		FString getEventName();

	UFUNCTION(BlueprintCallable, Category = "Game")
		FString getDescribe();

	UFUNCTION(BlueprintCallable, Category = "Game")
		UEventOption* getOptionA();

	UFUNCTION(BlueprintCallable, Category = "Game")
		UEventOption* getOptionB();

	UFUNCTION(BlueprintCallable, Category = "Game")
		UEventOption* getOptionC();

	UFUNCTION(BlueprintCallable, Category = "Game")
		FString getTalker();

	bool checkAvailable(int32 date, UPlayerAttr player_attr);
	void setUpData();
};
