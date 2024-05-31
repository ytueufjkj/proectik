#include "sinparallelogram.h"
#include "ui_sinparallelogram.h"
#include <math.h>
SinParallelogram::SinParallelogram(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SinParallelogram)
{
    ui->setupUi(this);
}

SinParallelogram::~SinParallelogram()
{
    delete ui;
}

void SinParallelogram::on_lineEdit_textEdited(const QString &arg1)//a
{
    a=arg1.toDouble();
    r=alpha*3.14159265359/180;
    S=a*b*sin(r);
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}


void SinParallelogram::on_lineEdit_2_textEdited(const QString &arg1)//b
{
    b=arg1.toDouble();
    r=alpha*3.14159265359/180;
    S=a*b*sin(r);
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}


void SinParallelogram::on_lineEdit_3_textEdited(const QString &arg1)//alpha
{
    alpha=arg1.toDouble();
    r=alpha*3.14159265359/180;
    S=a*b*sin(r);
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

