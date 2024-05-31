#include "diagonalsrhombus.h"
#include "ui_diagonalsrhombus.h"

DiagonalsRhombus::DiagonalsRhombus(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DiagonalsRhombus)
{
    ui->setupUi(this);
}

DiagonalsRhombus::~DiagonalsRhombus()
{
    delete ui;
}

void DiagonalsRhombus::on_lineEdit_textEdited(const QString &arg1)//d1
{
     d1=arg1.toDouble();
}


void DiagonalsRhombus::on_lineEdit_2_textEdited(const QString &arg1)//d2
{
     d2=arg1.toDouble();
    S=d1*d2/2;
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}

