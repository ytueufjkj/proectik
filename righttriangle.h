#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include <QWidget>

namespace Ui {
class Righttriangle;
}

class Righttriangle : public QWidget
{
    Q_OBJECT

public:
    explicit Righttriangle(QWidget *parent = nullptr);
    ~Righttriangle();


private slots:
    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::Righttriangle *ui;
};

#endif // RIGHTTRIANGLE_H
