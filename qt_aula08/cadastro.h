#ifndef CADASTRO_H
#define CADASTRO_H

#include <QDialog>

namespace Ui {
class Cadastro;
}

class Cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();

private:
    Ui::Cadastro *ui;
};

#endif // CADASTRO_H
