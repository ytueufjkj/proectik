/********************************************************************************
** Form generated from reading UI file 'rectangular.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTANGULAR_H
#define UI_RECTANGULAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rectangular
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *Rectangular)
    {
        if (Rectangular->objectName().isEmpty())
            Rectangular->setObjectName("Rectangular");
        Rectangular->resize(700, 700);
        groupBox = new QGroupBox(Rectangular);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 110, 291, 371));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 280, 211, 80));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 40, 201, 31));
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

        retranslateUi(Rectangular);

        QMetaObject::connectSlotsByName(Rectangular);
    } // setupUi

    void retranslateUi(QWidget *Rectangular)
    {
        Rectangular->setWindowTitle(QCoreApplication::translate("Rectangular", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Rectangular", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Rectangular", "\320\277\320\273\320\276\321\211\320\260\320\264\321\214 \321\200\320\260\320\262\320\275\320\260:", nullptr));
        label->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("Rectangular", "\320\260:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Rectangular", "b:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rectangular: public Ui_Rectangular {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTANGULAR_H
