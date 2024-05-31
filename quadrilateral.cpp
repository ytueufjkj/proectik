#include "quadrilateral.h"
#include "ui_quadrilateral.h"

quadrilateral::quadrilateral(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::quadrilateral)
{
    ui->setupUi(this);
}

quadrilateral::~quadrilateral()
{
    delete ui;
}

void quadrilateral::on_pushButton_2_clicked()//паралеллограм
{
    parallelogram.show();
}


void quadrilateral::on_pushButton_clicked()//прямоугольник
{
    rectangular.show();
}


void quadrilateral::on_pushButton_4_clicked()//квадрат
{
    square.show();
}


void quadrilateral::on_pushButton_5_clicked()//ромб
{
    rhombus.show();
}


void quadrilateral::on_pushButton_3_clicked()//трапеция
{
    trapezoid.show();
}

