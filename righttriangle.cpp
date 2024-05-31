#include "righttriangle.h"
#include "ui_righttriangle.h"
#include <QLabel>
#include <math.h>
Righttriangle::Righttriangle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Righttriangle)
{
    ui->setupUi(this);
}

Righttriangle::~Righttriangle()
{
    delete ui;
}

void Righttriangle::on_lineEdit_textEdited(const QString &arg1)
{
    double a=0;
    double S=0;
    a=arg1.toDouble();
    S=a*a*sqrt(3)/4; // формула равностороннего треугольника
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

