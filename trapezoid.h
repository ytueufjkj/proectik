#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include <QWidget>

namespace Ui {
class Trapezoid;
}

class Trapezoid : public QWidget
{
    Q_OBJECT

public:
    explicit Trapezoid(QWidget *parent = nullptr);
    ~Trapezoid();
    double a=0, b=0,h=0, S=0;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

private:
    Ui::Trapezoid *ui;
};

#endif // TRAPEZOID_H
