#include "rectangular.h"
#include "ui_rectangular.h"

Rectangular::Rectangular(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rectangular)
{
    ui->setupUi(this);
}

Rectangular::~Rectangular()
{
    delete ui;
}

void Rectangular::on_lineEdit_textEdited(const QString &arg1)//a
{
     a=arg1.toDouble();
}


void Rectangular::on_lineEdit_2_textEdited(const QString &arg1)//b
{
     b=arg1.toDouble();
    S=a*b;
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

