#include "listhotels.h"

ListHotels::ListHotels()
{
}

ListHotels::ListHotels( QString NameHotel , QString AdressHotel , int RatingHotel)
{

    this->m_NameHotel = NameHotel;
    this->m_AdressHotel = AdressHotel;
    this->m_RatingHotel = RatingHotel;
}

void ListHotels::SetName(const QString NameHotel)
{
    this->m_NameHotel = NameHotel;
}

void ListHotels::SetAdressHotel(const QString AdressHotel)
{
    this->m_AdressHotel = AdressHotel;
}

void ListHotels::SetRatingHotel(const int RatingHotel)
{
    this->m_RatingHotel = RatingHotel;
}

void ListHotels::SetTypeApartament( QVector<InformationApartments> vectorApartaments)
{
    this->m_vectorApartaments = vectorApartaments;
}

QVector<InformationApartments> ListHotels::GetType()
{
    return m_vectorApartaments;
}







