#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "first_hotel_page.h"
#include "second_hotel_page.h"
#include "third_hotel_page.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_frist_window_button_clicked()
{
    First_hotel_page window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_second_window_button_clicked()
{
    second_hotel_page window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_third_window_button_clicked()
{
    third_hotel_page window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_search_button_clicked()
{
    QString search_text = ui->search_bar->text();
    QMessageBox :: information(this,"ERROR","DANILA_EBLAN_DELAY_EBANIY_POUISK tut hueta vot ->" + search_text );
}

