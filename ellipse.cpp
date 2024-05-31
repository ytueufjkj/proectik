#include "ellipse.h"
#include "ui_ellipse.h"

Ellipse::Ellipse(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ellipse)
{
    ui->setupUi(this);
}

Ellipse::~Ellipse()
{
    delete ui;
}

void Ellipse::on_lineEdit_textEdited(const QString &arg1)//a
{
    a=arg1.toDouble();
    S=a*b*pi;
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}


void Ellipse::on_lineEdit_2_textEdited(const QString &arg1)//b
{
    b=arg1.toDouble();
    S=a*b*pi;
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

