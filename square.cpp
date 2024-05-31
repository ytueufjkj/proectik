#include "square.h"
#include "ui_square.h"
#include <math.h>
Square::Square(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Square)
{
    ui->setupUi(this);
}

Square::~Square()
{
    delete ui;
}

void Square::on_lineEdit_textEdited(const QString &arg1)
{
    double a=0;
    double S=0;
    a=arg1.toDouble();
    S=a*a;
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

