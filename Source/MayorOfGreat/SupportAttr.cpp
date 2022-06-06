#include "SupportAttr.h"

float USupportAttr::getTotolSupport()
{
    return m_mainstream * m_ethnic_minority
        + m_ethnic_minority * m_ethnic_minority_weight
        + m_sexual_minority * m_sexual_minority_weight
        + m_refugee * m_refugee_weight
        + m_bourgeoisie * m_bourgeoisie_weight
        + m_proletariat_weight * m_proletariat_weight
        ;
}

float USupportAttr::getMainstream()
{
    return m_mainstream;
}

float USupportAttr::getEthnicMinority()
{
    return m_ethnic_minority;
}

float USupportAttr::getSexualMinority()
{
    return m_sexual_minority;
}

float USupportAttr::getRefugee()
{
    return m_refugee;
}

float USupportAttr::getBourgeoisie()
{
    return m_bourgeoisie;
}

float USupportAttr::getProletariat()
{
    return m_proletariat;
}

void USupportAttr::add(const USupportAttr& other)
{
    m_mainstream += other.m_mainstream;
    m_ethnic_minority += other.m_ethnic_minority;
    m_sexual_minority += other.m_sexual_minority;
    m_refugee += other.m_refugee;
    m_bourgeoisie += other.m_bourgeoisie;
    m_proletariat += other.m_proletariat;

    m_mainstream_weight += other.m_mainstream_weight;
    m_ethnic_minority_weight += other.m_ethnic_minority_weight;
    m_sexual_minority_weight += other.m_sexual_minority_weight;
    m_refugee_weight += other.m_refugee_weight;
    m_bourgeoisie_weight += other.m_bourgeoisie_weight;
    m_proletariat_weight += other.m_proletariat_weight;
}
