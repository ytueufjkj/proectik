/********************************************************************************
** Form generated from reading UI file 'gerona.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERONA_H
#define UI_GERONA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gerona
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_3;
    QGroupBox *groupBox_5;
    QLabel *label;

    void setupUi(QWidget *Gerona)
    {
        if (Gerona->objectName().isEmpty())
            Gerona->setObjectName("Gerona");
        Gerona->resize(700, 700);
        groupBox = new QGroupBox(Gerona);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 100, 281, 421));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 70, 111, 81));
        QFont font1;
        font1.setPointSize(12);
        groupBox_2->setFont(font1);
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 40, 113, 28));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 150, 111, 81));
        groupBox_3->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(0, 40, 113, 31));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 230, 111, 81));
        groupBox_4->setFont(font1);
        lineEdit_3 = new QLineEdit(groupBox_4);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(0, 40, 113, 28));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(10, 320, 201, 91));
        label = new QLabel(groupBox_5);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 50, 201, 31));

        retranslateUi(Gerona);

        QMetaObject::connectSlotsByName(Gerona);
    } // setupUi

    void retranslateUi(QWidget *Gerona)
    {
        Gerona->setWindowTitle(QCoreApplication::translate("Gerona", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Gerona", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Gerona", "\320\260:", nullptr));
        lineEdit->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("Gerona", "b:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Gerona", "c:", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Gerona", "\320\277\320\273\320\276\321\211\320\260\320\264\321\214 \321\200\320\260\320\262\320\275\320\260:", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Gerona: public Ui_Gerona {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERONA_H
