#include "FavorAttr.h"

int32 UFavorAttr::getPress()
{
	return m_press;
}

int32 UFavorAttr::getGane()
{
	return m_gang;
}

int32 UFavorAttr::getPolitician()
{
	return m_politician;
}

int32 UFavorAttr::getCelebrity()
{
	return m_celebrity;
}

void UFavorAttr::add(const UFavorAttr& other)
{
	m_press += other.m_press;
	m_gang += other.m_gang;
	m_politician += other.m_politician;
	m_celebrity += other.m_celebrity;
}
