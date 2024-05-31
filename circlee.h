#ifndef CIRCLEE_H
#define CIRCLEE_H

#include <QWidget>

namespace Ui {
class Circlee;
}

class Circlee : public QWidget
{
    Q_OBJECT

public:
    explicit Circlee(QWidget *parent = nullptr);
    ~Circlee();
    double S=0, r=0, pi=3.14159265359;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::Circlee *ui;
};

#endif // CIRCLEE_H
