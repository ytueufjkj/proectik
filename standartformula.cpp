#include "standartformula.h"
#include "ui_standartformula.h"
#include "iostream"

Standartformula::Standartformula(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Standartformula)
{
    ui->setupUi(this);
}

Standartformula::~Standartformula()
{
    delete ui;
}

void Standartformula::on_lineEdit_textEdited(const QString &arg1) //а
{
    a=arg1.toDouble();
}


void Standartformula::on_lineEdit_2_textEdited(const QString &arg1)//высота
{
    h=arg1.toDouble();
    S=a*h/2;
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

