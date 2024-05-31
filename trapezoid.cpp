#include "trapezoid.h"
#include "ui_trapezoid.h"

Trapezoid::Trapezoid(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Trapezoid)
{
    ui->setupUi(this);
}

Trapezoid::~Trapezoid()
{
    delete ui;
}

void Trapezoid::on_lineEdit_textEdited(const QString &arg1) //a
{
    a=arg1.toDouble();
}


void Trapezoid::on_lineEdit_2_textEdited(const QString &arg1)//b
{
    b=arg1.toDouble();
}


void Trapezoid::on_lineEdit_3_textEdited(const QString &arg1)//h
{
    h=arg1.toDouble();
    S=((a+b)/2)*h;
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

