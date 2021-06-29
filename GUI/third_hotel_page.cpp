#include "third_hotel_page.h"
#include "ui_third_hotel_page.h"

third_hotel_page::third_hotel_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::third_hotel_page)
{
    ui->setupUi(this);
}

third_hotel_page::~third_hotel_page()
{
    delete ui;
}
