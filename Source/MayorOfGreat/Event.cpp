#include "Event.h"

UEvent::UEvent()
{
	m_options = new UEventOption[3];
}

UEvent::~UEvent()
{
	delete[] m_options;
}

FString UEvent::getDescribe()
{
	return m_describe;
}

UEventOption* UEvent::getOptionA()
{
	return &m_options[0];
}

UEventOption* UEvent::getOptionB()
{
	return &m_options[1];
}

UEventOption* UEvent::getOptionC()
{
	return &m_options[2];
}

FString UEvent::getTalker()
{
	return m_talker;
}
