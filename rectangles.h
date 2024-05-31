#ifndef RECTANGLES_H
#define RECTANGLES_H

#include <QWidget>
#include "righttriangle.h"
#include "triangle.h"
#include "commonrectangles.h"
namespace Ui {
class Rectangles;
}

class Rectangles : public QWidget
{
    Q_OBJECT

public:
    explicit Rectangles(QWidget *parent = nullptr);
    ~Rectangles();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Rectangles *ui;
    Righttriangle righttriangle;
    Triangle triangle;
    Commonrectangles common;
};

#endif // RECTANGLES_H
