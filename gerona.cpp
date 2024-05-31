#include "gerona.h"
#include "ui_gerona.h"
#include <math.h>

Gerona::Gerona(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Gerona)
{
    ui->setupUi(this);
}

Gerona::~Gerona()
{
    delete ui;
}

void Gerona::on_lineEdit_textEdited(const QString &arg1) //a
{
     a=arg1.toDouble();
}


void Gerona::on_lineEdit_2_textEdited(const QString &arg1)//b
{
     b=arg1.toDouble();
}


void Gerona::on_lineEdit_3_textEdited(const QString &arg1)//c
{
     c=arg1.toDouble();
    double p=0;
     p=(a+b+c)/2;//полупериметр
    S=sqrt(p*(p-a)*(p-b)*(p-c));//формула герона
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

