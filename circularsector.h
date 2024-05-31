#ifndef CIRCULARSECTOR_H
#define CIRCULARSECTOR_H

#include <QWidget>

namespace Ui {
class Circularsector;
}

class Circularsector : public QWidget
{
    Q_OBJECT

public:
    explicit Circularsector(QWidget *parent = nullptr);
    ~Circularsector();
    double alpha=0,a=0,b=0,S=0;
    double r=0;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

private:
    Ui::Circularsector *ui;
};

#endif // CIRCULARSECTOR_H
