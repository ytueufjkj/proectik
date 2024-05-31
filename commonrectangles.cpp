#include "commonrectangles.h"
#include "ui_commonrectangles.h"

Commonrectangles::Commonrectangles(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Commonrectangles)
{
    ui->setupUi(this);
}

Commonrectangles::~Commonrectangles()
{
    delete ui;
}

void Commonrectangles::on_pushButton_clicked()//по высоте и стороне
{
standartformula.show();
}


void Commonrectangles::on_pushButton_2_clicked()//по трем сторонам
{
gerona.show();
}

