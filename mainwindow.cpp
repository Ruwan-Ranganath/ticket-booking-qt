#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   QPixmap pic("C:/Users/Gantac/Desktop/QT project/england_tickets_banner.jpg");
ui->label_pic->setPixmap(pic);

}

MainWindow::~MainWindow()
{
    delete ui;
}
