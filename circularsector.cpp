#include "circularsector.h"
#include "ui_circularsector.h"

Circularsector::Circularsector(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Circularsector)
{
    ui->setupUi(this);
}

Circularsector::~Circularsector()
{
    delete ui;
}

void Circularsector::on_lineEdit_textEdited(const QString &arg1)//a/r
{
    a=arg1.toDouble();
    r=alpha*3.14159265359/180;
    S=a*a*alpha/2;
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}


void Circularsector::on_lineEdit_2_textEdited(const QString &arg1)//alpha
{
    alpha=arg1.toDouble();
    r=alpha*3.14159265359/180;
    S=a*a*alpha/2;
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

