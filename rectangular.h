#ifndef RECTANGULAR_H
#define RECTANGULAR_H

#include <QWidget>

namespace Ui {
class Rectangular;
}

class Rectangular : public QWidget
{
    Q_OBJECT

public:
    explicit Rectangular(QWidget *parent = nullptr);
    ~Rectangular();
    double a=0, b=0, S=0;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

private:
    Ui::Rectangular *ui;
};

#endif // RECTANGULAR_H
