#ifndef SINPARALLELOGRAM_H
#define SINPARALLELOGRAM_H

#include <QWidget>

namespace Ui {
class SinParallelogram;
}

class SinParallelogram : public QWidget
{
    Q_OBJECT

public:
    explicit SinParallelogram(QWidget *parent = nullptr);
    ~SinParallelogram();
    double alpha=0,a=0,b=0,S=0;
    double r=0;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

private:
    Ui::SinParallelogram *ui;
};

#endif // SINPARALLELOGRAM_H
