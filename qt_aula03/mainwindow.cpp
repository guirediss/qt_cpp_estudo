#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
   close();
}


void MainWindow::on_pushButton_2_clicked()
{
    QString css = "background-color:#F00;color:#000;";
    ui->label->setStyleSheet(css);
}

