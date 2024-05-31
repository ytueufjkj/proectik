#ifndef STANDARTPARALLELOGRAM_H
#define STANDARTPARALLELOGRAM_H

#include <QWidget>

namespace Ui {
class StandartParallelogram;
}

class StandartParallelogram : public QWidget
{
    Q_OBJECT

public:
    explicit StandartParallelogram(QWidget *parent = nullptr);
    ~StandartParallelogram();
    double a=0, h=0, S=0;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

private:
    Ui::StandartParallelogram *ui;
};

#endif // STANDARTPARALLELOGRAM_H
