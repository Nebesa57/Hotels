#ifndef THIRD_HOTEL_PAGE_H
#define THIRD_HOTEL_PAGE_H

#include <QDialog>

namespace Ui {
class third_hotel_page;
}

class third_hotel_page : public QDialog
{
    Q_OBJECT

public:
    explicit third_hotel_page(QWidget *parent = nullptr);
    ~third_hotel_page();

private:
    Ui::third_hotel_page *ui;
};

#endif // THIRD_HOTEL_PAGE_H
