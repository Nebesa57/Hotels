#ifndef INFORMATIONHOTELS_H
#define INFORMATIONHOTELS_H

#include "InformationHotels_global.h"

#include "../objects/listhotels.h"

class INFORMATIONHOTELS_EXPORT InformationHotels
{
public:
    InformationHotels();

    ListHotels OneHotel;

    ListHotels TwoHotel;

    ListHotels ThreeHotel;

};

#endif // INFORMATIONHOTELS_H
