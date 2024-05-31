/********************************************************************************
** Form generated from reading UI file 'standart.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDART_H
#define UI_STANDART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Standart
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_4;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *Standart)
    {
        if (Standart->objectName().isEmpty())
            Standart->setObjectName("Standart");
        Standart->resize(700, 700);
        groupBox = new QGroupBox(Standart);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 90, 301, 291));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 180, 221, 80));
        label = new QLabel(groupBox_4);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 50, 221, 31));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 40, 111, 123));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName("groupBox_2");
        QFont font1;
        font1.setPointSize(12);
        groupBox_2->setFont(font1);
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 30, 113, 28));

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(0, 30, 113, 28));

        verticalLayout->addWidget(groupBox_3);


        retranslateUi(Standart);

        QMetaObject::connectSlotsByName(Standart);
    } // setupUi

    void retranslateUi(QWidget *Standart)
    {
        Standart->setWindowTitle(QCoreApplication::translate("Standart", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Standart", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Standart", "\320\277\320\273\320\276\321\211\320\260\320\264\321\214 \321\200\320\260\320\262\320\275\320\260:", nullptr));
        label->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("Standart", "\320\260:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Standart", "h:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Standart: public Ui_Standart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDART_H
