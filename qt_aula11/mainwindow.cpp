#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->addPermanentWidget(ui->pushButton_2);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_ok_clicked()
{
    ui->statusbar->showMessage("Nome:"+ui->txt_nome->text()+ " | e-mail:"+ui->txt_email->text());
}


void MainWindow::on_pushButton_2_clicked()
{
    QString msg = "Mensagem";
    ui->statusbar->showMessage(msg);
    QMessageBox::about(this, "msg", msg);
}

