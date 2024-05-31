#include "parallelogram.h"
#include "ui_parallelogram.h"

Parallelogram::Parallelogram(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Parallelogram)
{
    ui->setupUi(this);
}

Parallelogram::~Parallelogram()
{
    delete ui;
}

void Parallelogram::on_pushButton_clicked()
{
    standartParallelogram.show();
}


void Parallelogram::on_pushButton_2_clicked()
{
    sinParallelogram.show();
}

