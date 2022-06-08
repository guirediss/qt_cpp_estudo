#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <qpixmap.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap logo("C:/Users/guire/OneDrive/Documentos/qt_estudo/qt_aula10/download.png");
    ui->label->setPixmap(logo.scaled(100,100,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

