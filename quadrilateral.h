#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include <QWidget>
#include "parallelogram.h"
#include "rectangular.h"
#include "square.h"
#include "trapezoid.h"
#include "rhombus.h"
namespace Ui {
class quadrilateral;
}

class quadrilateral : public QWidget
{
    Q_OBJECT

public:
    explicit quadrilateral(QWidget *parent = nullptr);
    ~quadrilateral();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::quadrilateral *ui;
    Parallelogram parallelogram;
    Rectangular rectangular;
    Square square;
    Trapezoid trapezoid;
    Rhombus rhombus;
};

#endif // QUADRILATERAL_H
