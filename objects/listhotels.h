#ifndef LISTHOTELS_H
#define LISTHOTELS_H
#include <QVector>
#include "../InformationApartments/informationapartments.h"
#include "objects_global.h"
#include <QString>

class OBJECTS_EXPORT ListHotels
{
public:
    ListHotels();

    ListHotels(QString NameHotel , QString AdressHotel , int RatingHotel);

    void SetName(const QString NameHotel);

    void SetAdressHotel(const QString AdressHotel);

    void SetRatingHotel(const int RatingHotel);

    void SetTypeApartament(QVector<InformationApartments> vectorApartaments);

    QVector<InformationApartments> GetType();

private:
    QString m_NameHotel;
    QString m_AdressHotel;
    int m_RatingHotel;
    QVector<InformationApartments> m_vectorApartaments;
};

#endif // LISTHOTELS_H
