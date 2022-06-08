#include "cadastro.h"
#include "ui_cadastro.h"

Cadastro::Cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);
}

Cadastro::~Cadastro()
{
    delete ui;
}
