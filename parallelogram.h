#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include <QWidget>
#include "standartparallelogram.h"
#include "sinparallelogram.h"

namespace Ui {
class Parallelogram;
}

class Parallelogram : public QWidget
{
    Q_OBJECT

public:
    explicit Parallelogram(QWidget *parent = nullptr);
    ~Parallelogram();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Parallelogram *ui;
    StandartParallelogram standartParallelogram;
    SinParallelogram sinParallelogram;
};

#endif // PARALLELOGRAM_H
