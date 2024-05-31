#include "rhombus.h"
#include "ui_rhombus.h"

Rhombus::Rhombus(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rhombus)
{
    ui->setupUi(this);
}

Rhombus::~Rhombus()
{
    delete ui;
}

void Rhombus::on_pushButton_2_clicked()//a and sin
{
    sinRhombus.show();
}


void Rhombus::on_pushButton_clicked()//д1 и д2
{
    diagonalsRhombus.show();
}

