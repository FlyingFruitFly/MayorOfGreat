#include "EventOption.h"


bool UEventOption::checkAvailable(UPlayerAttr player_attr)
{
	return m_available;
}

FString UEventOption::getName()
{
	return m_name;
}

FString UEventOption::getDescribe()
{
	return m_describe;
}