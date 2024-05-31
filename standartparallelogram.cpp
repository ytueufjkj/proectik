#include "standartparallelogram.h"
#include "ui_standartparallelogram.h"

StandartParallelogram::StandartParallelogram(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StandartParallelogram)
{
    ui->setupUi(this);
}

StandartParallelogram::~StandartParallelogram()
{
    delete ui;
}

void StandartParallelogram::on_lineEdit_textEdited(const QString &arg1)//a
{
    a=arg1.toDouble();
}


void StandartParallelogram::on_lineEdit_2_textEdited(const QString &arg1)//h
{
    h=arg1.toDouble();
    S=a*h;
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

