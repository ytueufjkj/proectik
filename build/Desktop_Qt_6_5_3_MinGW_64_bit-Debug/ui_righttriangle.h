/********************************************************************************
** Form generated from reading UI file 'righttriangle.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGHTTRIANGLE_H
#define UI_RIGHTTRIANGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Righttriangle
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QLabel *label;

    void setupUi(QWidget *Righttriangle)
    {
        if (Righttriangle->objectName().isEmpty())
            Righttriangle->setObjectName("Righttriangle");
        Righttriangle->resize(700, 700);
        groupBox = new QGroupBox(Righttriangle);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(100, 90, 271, 241));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 60, 120, 80));
        QFont font1;
        font1.setPointSize(12);
        groupBox_2->setFont(font1);
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 40, 113, 28));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(20, 150, 231, 80));
        groupBox_3->setFont(font1);
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 40, 231, 20));

        retranslateUi(Righttriangle);

        QMetaObject::connectSlotsByName(Righttriangle);
    } // setupUi

    void retranslateUi(QWidget *Righttriangle)
    {
        Righttriangle->setWindowTitle(QCoreApplication::translate("Righttriangle", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Righttriangle", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Righttriangle", "\320\260:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Righttriangle", "\320\277\320\273\320\276\321\211\320\260\320\264\321\214 \321\200\320\260\320\262\320\275\320\260:", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Righttriangle: public Ui_Righttriangle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGHTTRIANGLE_H
