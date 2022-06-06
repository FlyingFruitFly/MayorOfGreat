#include "PlayerAttr.h"

UPlayerAttr::UPlayerAttr()
{
	m_support = NewObject<USupportAttr>(this, USupportAttr::StaticClass());
	m_favor = NewObject<UFavorAttr>(this, UFavorAttr::StaticClass());
}

int32 UPlayerAttr::getCharm()
{
	return m_charm;
}

int32 UPlayerAttr::getWealth()
{
	return m_wealth;
}

int32 UPlayerAttr::getPoliticalTendency()
{
	return m_political_tendency;
}

int32 UPlayerAttr::getExpress()
{
	return m_express;
}

USupportAttr* UPlayerAttr::getSupport()
{
	return m_support;
}

UFavorAttr* UPlayerAttr::getFavor()
{
	return m_favor;
}

void UPlayerAttr::add(const UPlayerAttr& other)
{
	m_charm += other.m_charm;
	m_wealth += other.m_wealth;
	m_political_tendency += other.m_political_tendency;
	m_express += other.m_express;
	m_support->add(*other.m_support);
	m_favor->add(*other.m_favor);
}
