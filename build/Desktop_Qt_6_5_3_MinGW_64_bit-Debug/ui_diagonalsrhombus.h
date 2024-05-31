/********************************************************************************
** Form generated from reading UI file 'diagonalsrhombus.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGONALSRHOMBUS_H
#define UI_DIAGONALSRHOMBUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiagonalsRhombus
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *DiagonalsRhombus)
    {
        if (DiagonalsRhombus->objectName().isEmpty())
            DiagonalsRhombus->setObjectName("DiagonalsRhombus");
        DiagonalsRhombus->resize(700, 700);
        groupBox = new QGroupBox(DiagonalsRhombus);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(90, 110, 361, 311));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 220, 291, 80));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 40, 291, 41));
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

        retranslateUi(DiagonalsRhombus);

        QMetaObject::connectSlotsByName(DiagonalsRhombus);
    } // setupUi

    void retranslateUi(QWidget *DiagonalsRhombus)
    {
        DiagonalsRhombus->setWindowTitle(QCoreApplication::translate("DiagonalsRhombus", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DiagonalsRhombus", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DiagonalsRhombus", "\320\277\320\273\320\276\321\211\320\260\320\264\321\214 \321\200\320\260\320\262\320\275\320\260:", nullptr));
        label->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("DiagonalsRhombus", "d1", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DiagonalsRhombus", "d2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiagonalsRhombus: public Ui_DiagonalsRhombus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGONALSRHOMBUS_H
