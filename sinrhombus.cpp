#include "sinrhombus.h"
#include "ui_sinrhombus.h"
#include <math.h>
SinRhombus::SinRhombus(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SinRhombus)
{
    ui->setupUi(this);
}

SinRhombus::~SinRhombus()
{
    delete ui;
}

void SinRhombus::on_lineEdit_textEdited(const QString &arg1)//a
{
     a=arg1.toDouble();
}


void SinRhombus::on_lineEdit_2_textEdited(const QString &arg1)//alpha
{
    alpha=arg1.toDouble();
    double r=alpha*3.14159265359/180;
    S=a*a*sin(r);
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

