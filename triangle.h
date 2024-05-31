#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <QWidget>

namespace Ui {
class Triangle;
}

class Triangle : public QWidget
{
    Q_OBJECT

public:
    explicit Triangle(QWidget *parent = nullptr);
    ~Triangle();
    double S=0;
    double a=0,b=0;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

private:
    Ui::Triangle *ui;
};

#endif // TRIANGLE_H
