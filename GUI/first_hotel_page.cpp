#include "first_hotel_page.h"
#include "ui_first_hotel_page.h"

First_hotel_page::First_hotel_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::First_hotel_page)
{
    ui->setupUi(this);
}

First_hotel_page::~First_hotel_page()
{
    delete ui;
}
