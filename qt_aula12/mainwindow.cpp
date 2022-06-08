#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap cpp(":/imgs/cpp.png");
    ui->label->setPixmap(cpp);

}

MainWindow::~MainWindow()
{
    delete ui;
}

