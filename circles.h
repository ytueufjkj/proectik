#ifndef CIRCLES_H
#define CIRCLES_H

#include <QWidget>
#include "circlee.h"
#include "circularsector.h"
#include "ellipse.h"
namespace Ui {
class Circles;
}

class Circles : public QWidget
{
    Q_OBJECT

public:
    explicit Circles(QWidget *parent = nullptr);
    ~Circles();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Circles *ui;
    Circlee circlee;
    Circularsector circularsector;
    Ellipse ellipse;
};

#endif // CIRCLES_H
