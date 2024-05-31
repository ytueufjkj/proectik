/********************************************************************************
** Form generated from reading UI file 'quadrilateral.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUADRILATERAL_H
#define UI_QUADRILATERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quadrilateral
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QWidget *quadrilateral)
    {
        if (quadrilateral->objectName().isEmpty())
            quadrilateral->setObjectName("quadrilateral");
        quadrilateral->resize(700, 700);
        verticalLayoutWidget = new QWidget(quadrilateral);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 170, 481, 431));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        label = new QLabel(quadrilateral);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 631, 71));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        retranslateUi(quadrilateral);

        QMetaObject::connectSlotsByName(quadrilateral);
    } // setupUi

    void retranslateUi(QWidget *quadrilateral)
    {
        quadrilateral->setWindowTitle(QCoreApplication::translate("quadrilateral", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("quadrilateral", "\320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\320\276\320\263\321\200\320\260\320\274\320\274", nullptr));
        pushButton->setText(QCoreApplication::translate("quadrilateral", "\320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        pushButton_4->setText(QCoreApplication::translate("quadrilateral", "\320\272\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));
        pushButton_5->setText(QCoreApplication::translate("quadrilateral", "\321\200\320\276\320\274\320\261", nullptr));
        pushButton_3->setText(QCoreApplication::translate("quadrilateral", "\321\202\321\200\320\260\320\277\320\265\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("quadrilateral", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\275\321\203\320\266\320\275\321\213\320\271 \321\202\320\270\320\277 \321\207\320\265\321\202\321\213\321\200\320\265\321\205\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quadrilateral: public Ui_quadrilateral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUADRILATERAL_H
