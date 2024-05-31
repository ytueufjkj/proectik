/********************************************************************************
** Form generated from reading UI file 'ellipse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELLIPSE_H
#define UI_ELLIPSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ellipse
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_4;
    QLabel *label;

    void setupUi(QWidget *Ellipse)
    {
        if (Ellipse->objectName().isEmpty())
            Ellipse->setObjectName("Ellipse");
        Ellipse->resize(700, 700);
        groupBox = new QGroupBox(Ellipse);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 110, 281, 361));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 50, 120, 80));
        QFont font1;
        font1.setPointSize(12);
        groupBox_2->setFont(font1);
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 40, 113, 28));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 140, 120, 80));
        groupBox_3->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(0, 40, 113, 28));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 270, 221, 80));
        label = new QLabel(groupBox_4);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 40, 221, 41));

        retranslateUi(Ellipse);

        QMetaObject::connectSlotsByName(Ellipse);
    } // setupUi

    void retranslateUi(QWidget *Ellipse)
    {
        Ellipse->setWindowTitle(QCoreApplication::translate("Ellipse", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Ellipse", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Ellipse", "a:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Ellipse", "b:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Ellipse", "\320\277\320\273\320\276\321\211\320\260\320\264\321\214 \321\200\320\260\320\262\320\275\320\260:", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ellipse: public Ui_Ellipse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELLIPSE_H
