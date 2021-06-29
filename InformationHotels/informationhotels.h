#ifndef INFORMATIONHOTELS_H
#define INFORMATIONHOTELS_H

#include "InformationHotels_global.h"
#include "../objects/listhotels.h"
#include "../InformationApartments/informationapartments.h"

class INFORMATIONHOTELS_EXPORT InformationHotels
{
public:
    InformationHotels();

    ListHotels OneHotel;

    ListHotels TwoHotel;

    ListHotels ThreeHotel;

    QString ApartamentsType;

};

#endif // INFORMATIONHOTELS_H
