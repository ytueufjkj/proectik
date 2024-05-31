#ifndef DIAGONALSRHOMBUS_H
#define DIAGONALSRHOMBUS_H

#include <QWidget>

namespace Ui {
class DiagonalsRhombus;
}

class DiagonalsRhombus : public QWidget
{
    Q_OBJECT

public:
    explicit DiagonalsRhombus(QWidget *parent = nullptr);
    ~DiagonalsRhombus();
    double d1=0,d2=0,S=0;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

private:
    Ui::DiagonalsRhombus *ui;
};

#endif // DIAGONALSRHOMBUS_H
