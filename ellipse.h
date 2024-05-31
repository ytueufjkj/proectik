#ifndef ELLIPSE_H
#define ELLIPSE_H

#include <QWidget>

namespace Ui {
class Ellipse;
}

class Ellipse : public QWidget
{
    Q_OBJECT

public:
    explicit Ellipse(QWidget *parent = nullptr);
    ~Ellipse();
     double S=0, a=0,b=0, pi=3.14159265359;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

private:
    Ui::Ellipse *ui;
};

#endif // ELLIPSE_H
