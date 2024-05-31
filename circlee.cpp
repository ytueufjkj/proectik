#include "circlee.h"
#include "ui_circlee.h"

Circlee::Circlee(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Circlee)
{
    ui->setupUi(this);
}

Circlee::~Circlee()
{
    delete ui;
}

void Circlee::on_lineEdit_textEdited(const QString &arg1)//r
{
    r=arg1.toDouble();


    S=pi*r*r;
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

