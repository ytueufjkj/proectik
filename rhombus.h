#ifndef RHOMBUS_H
#define RHOMBUS_H

#include <QWidget>
#include "sinrhombus.h"
#include "diagonalsrhombus.h"

namespace Ui {
class Rhombus;
}

class Rhombus : public QWidget
{
    Q_OBJECT

public:
    explicit Rhombus(QWidget *parent = nullptr);
    ~Rhombus();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Rhombus *ui;
    SinRhombus sinRhombus;
    DiagonalsRhombus diagonalsRhombus;
};

#endif // RHOMBUS_H
