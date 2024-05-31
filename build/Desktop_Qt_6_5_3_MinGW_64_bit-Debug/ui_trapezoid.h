/********************************************************************************
** Form generated from reading UI file 'trapezoid.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAPEZOID_H
#define UI_TRAPEZOID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Trapezoid
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_5;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *Trapezoid)
    {
        if (Trapezoid->objectName().isEmpty())
            Trapezoid->setObjectName("Trapezoid");
        Trapezoid->resize(700, 700);
        groupBox = new QGroupBox(Trapezoid);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(110, 100, 261, 441));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 340, 211, 80));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 40, 211, 31));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 50, 120, 80));
        QFont font1;
        font1.setPointSize(12);
        groupBox_3->setFont(font1);
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 40, 113, 28));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 140, 120, 80));
        groupBox_4->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(0, 40, 113, 28));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(10, 230, 120, 80));
        groupBox_5->setFont(font1);
        lineEdit_3 = new QLineEdit(groupBox_5);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(0, 40, 113, 28));

        retranslateUi(Trapezoid);

        QMetaObject::connectSlotsByName(Trapezoid);
    } // setupUi

    void retranslateUi(QWidget *Trapezoid)
    {
        Trapezoid->setWindowTitle(QCoreApplication::translate("Trapezoid", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Trapezoid", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Trapezoid", "\320\277\320\273\320\276\321\211\320\260\320\264\321\214 \321\200\320\260\320\262\320\275\320\260:", nullptr));
        label->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("Trapezoid", "\320\260:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Trapezoid", "b:", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Trapezoid", "h:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Trapezoid: public Ui_Trapezoid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAPEZOID_H
