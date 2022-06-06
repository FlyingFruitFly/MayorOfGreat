#include "Event.h"

UEvent::UEvent()
{
	//UEventOption* new_option = CreateDefaultSubobject<UEventOption>(TEXT("OptionA"));
	//m_options.Add(new_option);
	//new_option = CreateDefaultSubobject<UEventOption>(TEXT("OptionB"));
	//m_options.Add(new_option);
	//new_option = CreateDefaultSubobject<UEventOption>(TEXT("OptionC"));
	//m_options.Add(new_option);
}

UEvent::~UEvent()
{
}

FString UEvent::getEventName()
{
	return m_event_name;
}

FString UEvent::getDescribe()
{
	return m_describe;
}

UEventOption* UEvent::getOptionA()
{
	return m_options[0];
}

UEventOption* UEvent::getOptionB()
{
	return m_options[1];
}

UEventOption* UEvent::getOptionC()
{
	return m_options[2];
}

FString UEvent::getTalker()
{
	return m_talker;
}

void UEvent::setUpData()
{
	m_event_name = "test";
	m_begin_date = 0;
	m_final_date = 1;
	m_describe = "test describe";
	m_label = "";
	m_talker = "÷˙¿Ì";
	for (int32 i = 0; i < 3; i++)
	{
		UEventOption* new_event_option = NewObject<UEventOption>(this, UEventOption::StaticClass());
		new_event_option->setUpData();
		m_options.Add(new_event_option);
	}
}
