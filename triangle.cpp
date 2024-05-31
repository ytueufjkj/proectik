#include "triangle.h"
#include "ui_triangle.h"
#include <iostream>



Triangle::Triangle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Triangle)
{
    ui->setupUi(this);
}

Triangle::~Triangle()
{
    delete ui;
}

void Triangle::on_lineEdit_textEdited(const QString &arg1)//а
{

    a=arg1.toDouble();
}


void Triangle::on_lineEdit_2_textEdited(const QString &arg1)//б
{

    b=arg1.toDouble();
    S=a*b/2; //площадь прямоугольного треугольника
    QString Squart=QString::number(S);

    ui->label->setText(Squart);
}


