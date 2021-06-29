#include "informationapartments.h"

#include "../objects/listhotels.h"

InformationApartments::InformationApartments()
{




}

QString InformationApartments::SetInformationApart(QString ApartamentType)
{
    this->m_ApartamentType = ApartamentType;
}

QString InformationApartments::GetInformationApart()
{
    return m_ApartamentType;
}


