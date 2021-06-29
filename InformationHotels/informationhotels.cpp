#include "informationhotels.h"
#include "../InformationApartments/informationapartments.h"
InformationHotels::InformationHotels()
{
     OneHotel.SetName("Космос");
     OneHotel.SetAdressHotel("Москва");
     OneHotel.SetRatingHotel(5);

     TwoHotel.SetName("Седьмое небо");
     TwoHotel.SetAdressHotel("Брянск");
     TwoHotel.SetRatingHotel(4);

     ThreeHotel.SetName("Азимут");
     ThreeHotel.SetAdressHotel("Воронеж");
     ThreeHotel.SetRatingHotel(4);

     InformationApartments Apart1;
     InformationApartments Apart2;
     InformationApartments Apart3;
     InformationApartments Apart4;

     QVector<InformationApartments> Apartaments1;
     QVector<InformationApartments> Apartaments2;
     QVector<InformationApartments> Apartaments3;

     Apart1.SetInformationApart("Одноместный");
     Apart2.SetInformationApart("Двухместный");
     Apart3.SetInformationApart("Трёхместный");
     Apart4.SetInformationApart("VIP");


     Apartaments1.push_back(Apart1);
     Apartaments1.push_back(Apart2);
     Apartaments1.push_back(Apart3);
     Apartaments1.push_back(Apart4);

     Apartaments2.push_back(Apart3);
     Apartaments2.push_back(Apart4);
     Apartaments2.push_back(Apart2);
     Apartaments2.push_back(Apart1);

     Apartaments3.push_back(Apart2);
     Apartaments3.push_back(Apart1);
     Apartaments3.push_back(Apart4);
     Apartaments3.push_back(Apart3);

     OneHotel.SetTypeApartament(Apartaments1);
     TwoHotel.SetTypeApartament(Apartaments2);
     ThreeHotel.SetTypeApartament(Apartaments3);
}
