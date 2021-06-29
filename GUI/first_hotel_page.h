#ifndef FIRST_HOTEL_PAGE_H
#define FIRST_HOTEL_PAGE_H

#include <QDialog>

namespace Ui {
class First_hotel_page;
}

class First_hotel_page : public QDialog
{
    Q_OBJECT

public:
    explicit First_hotel_page(QWidget *parent = nullptr);
    ~First_hotel_page();

private:
    Ui::First_hotel_page *ui;
};

#endif // FIRST_HOTEL_PAGE_H
