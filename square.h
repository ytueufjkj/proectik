#ifndef SQUARE_H
#define SQUARE_H

#include <QWidget>

namespace Ui {
class Square;
}

class Square : public QWidget
{
    Q_OBJECT

public:
    explicit Square(QWidget *parent = nullptr);
    ~Square();
    double a=0, b=0, c=0;
    double S=0;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::Square *ui;
};

#endif // SQUARE_H
