#include "rectangles.h"
#include "ui_rectangles.h"

Rectangles::Rectangles(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rectangles)
{
    ui->setupUi(this);
}

Rectangles::~Rectangles()
{
    delete ui;
}

void Rectangles::on_pushButton_clicked()//равносторонний
{
    righttriangle.show();
}


void Rectangles::on_pushButton_3_clicked()//прямоугольный
{
    triangle.show();
}


void Rectangles::on_pushButton_2_clicked()//общий вид
{
    common.show();
}

