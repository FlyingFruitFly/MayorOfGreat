#include "EventManager.h"

UEvent* UEventManager::getChosenEvent()
{
	return m_chosen_event;
}

void UEventManager::makeChoice(int32 index)
{
	
}

void UEventManager::decideEvent()
{

}

void UEventManager::setUpdata()
{
	UEvent* new_event = NewObject<UEvent>(this, UEvent::StaticClass());
	new_event->setUpData();
	m_events.add(new_event);
}
