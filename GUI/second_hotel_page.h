#ifndef SECOND_HOTEL_PAGE_H
#define SECOND_HOTEL_PAGE_H

#include <QDialog>

namespace Ui {
class second_hotel_page;
}

class second_hotel_page : public QDialog
{
    Q_OBJECT

public:
    explicit second_hotel_page(QWidget *parent = nullptr);
    ~second_hotel_page();

private:
    Ui::second_hotel_page *ui;
};

#endif // SECOND_HOTEL_PAGE_H
