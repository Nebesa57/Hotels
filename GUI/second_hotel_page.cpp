#include "second_hotel_page.h"
#include "ui_second_hotel_page.h"

second_hotel_page::second_hotel_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second_hotel_page)
{
    ui->setupUi(this);
}

second_hotel_page::~second_hotel_page()
{
    delete ui;
}
