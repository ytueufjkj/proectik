/********************************************************************************
** Form generated from reading UI file 'triangle.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIANGLE_H
#define UI_TRIANGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Triangle
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_5;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *Triangle)
    {
        if (Triangle->objectName().isEmpty())
            Triangle->setObjectName("Triangle");
        Triangle->resize(700, 700);
        Triangle->setBaseSize(QSize(0, 0));
        groupBox = new QGroupBox(Triangle);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(90, 120, 301, 411));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(10, 260, 221, 80));
        label = new QLabel(groupBox_5);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 50, 211, 20));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 121, 187));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName("groupBox_2");
        QFont font1;
        font1.setPointSize(12);
        groupBox_2->setFont(font1);
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 30, 113, 28));

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(0, 30, 113, 28));

        verticalLayout->addWidget(groupBox_3);


        retranslateUi(Triangle);

        QMetaObject::connectSlotsByName(Triangle);
    } // setupUi

    void retranslateUi(QWidget *Triangle)
    {
        Triangle->setWindowTitle(QCoreApplication::translate("Triangle", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Triangle", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Triangle", "\320\277\320\273\320\276\321\211\320\260\320\264\321\214 \321\200\320\260\320\262\320\275\320\260:", nullptr));
        label->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("Triangle", "\320\260:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Triangle", "b:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Triangle: public Ui_Triangle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIANGLE_H
