#ifndef GERONA_H
#define GERONA_H

#include <QWidget>

namespace Ui {
class Gerona;
}

class Gerona : public QWidget
{
    Q_OBJECT

public:
    explicit Gerona(QWidget *parent = nullptr);
    ~Gerona();
    double a=0, b=0, c=0;
    double S=0;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

private:
    Ui::Gerona *ui;
};

#endif // GERONA_H
