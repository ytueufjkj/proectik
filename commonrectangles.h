#ifndef COMMONRECTANGLES_H
#define COMMONRECTANGLES_H

#include <QWidget>
#include "standartformula.h"
#include "gerona.h"
namespace Ui {
class Commonrectangles;
}

class Commonrectangles : public QWidget
{
    Q_OBJECT

public:
    explicit Commonrectangles(QWidget *parent = nullptr);
    ~Commonrectangles();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Commonrectangles *ui;
    Standartformula standartformula;
    Gerona gerona;
};

#endif // COMMONRECTANGLES_H
