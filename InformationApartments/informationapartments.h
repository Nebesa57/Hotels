#ifndef INFORMATIONAPARTMENTS_H
#define INFORMATIONAPARTMENTS_H
#include <QString>

#include "InformationApartments_global.h"

class INFORMATIONAPARTMENTS_EXPORT InformationApartments
{
public:
    InformationApartments();

    QString SetInformationApart(QString ApartamentType);

    QString GetInformationApart();

private:
    QString m_ApartamentType;
};

#endif // INFORMATIONAPARTMENTS_H
