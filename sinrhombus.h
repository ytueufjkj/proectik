#ifndef SINRHOMBUS_H
#define SINRHOMBUS_H

#include <QWidget>

namespace Ui {
class SinRhombus;
}

class SinRhombus : public QWidget
{
    Q_OBJECT

public:
    explicit SinRhombus(QWidget *parent = nullptr);
    ~SinRhombus();
    double a=0,b=0,alpha=0,S=0;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

private:
    Ui::SinRhombus *ui;
};

#endif // SINRHOMBUS_H
