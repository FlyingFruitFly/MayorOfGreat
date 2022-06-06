#pragma once

#include <set>
#include "Event.h"
#include "EventManager.generated.h"

UCLASS(config = Game)
class UEventManager :public UClass
{
	GENERATED_BODY()

	std::set<UEvent> m_events;
	int32 m_date;
	UEvent* m_chosen_event;
public:
	UFUNCTION(BlueprintCallable, Category = "Game")
		UEvent* getChosenEvent();

	UFUNCTION(BlueprintCallable, Category = "Game")
		void makeChoice(int32 index);

private:
	void decideEvent();
};

