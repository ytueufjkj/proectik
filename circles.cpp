#include "circles.h"
#include "ui_circles.h"

Circles::Circles(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Circles)
{
    ui->setupUi(this);
}

Circles::~Circles()
{
    delete ui;
}

void Circles::on_pushButton_clicked()//круг
{
    circlee.show();
}


void Circles::on_pushButton_2_clicked()//круговой сектор
{
    circularsector.show();
}


void Circles::on_pushButton_3_clicked()//эллипс
{
    ellipse.show();
}

