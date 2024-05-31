#ifndef STANDARTFORMULA_H
#define STANDARTFORMULA_H

#include <QWidget>

namespace Ui {
class Standartformula;

}

class Standartformula : public QWidget
{
    Q_OBJECT

public:
    explicit Standartformula(QWidget *parent = nullptr);
    ~Standartformula();

    double S=0, h=0, a=0;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

private:
    Ui::Standartformula *ui;
};

#endif // STANDARTFORMULA_H
