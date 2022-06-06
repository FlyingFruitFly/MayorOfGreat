#include "EventOption.h"


UEventOption::UEventOption()
{
	
}

bool UEventOption::checkAvailable(UPlayerAttr player_attr)
{
	m_impact = NewObject<UPlayerAttr>(this, UPlayerAttr::StaticClass());
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

void UEventOption::setUpData()
{
	m_impact = NewObject<UPlayerAttr>(this, UPlayerAttr::StaticClass());
	m_impact->setUpData();
}
