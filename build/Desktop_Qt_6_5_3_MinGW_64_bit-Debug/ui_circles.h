/********************************************************************************
** Form generated from reading UI file 'circles.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIRCLES_H
#define UI_CIRCLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Circles
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QWidget *Circles)
    {
        if (Circles->objectName().isEmpty())
            Circles->setObjectName("Circles");
        Circles->resize(700, 700);
        verticalLayoutWidget = new QWidget(Circles);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(100, 200, 471, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        label = new QLabel(Circles);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 110, 491, 71));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);

        retranslateUi(Circles);

        QMetaObject::connectSlotsByName(Circles);
    } // setupUi

    void retranslateUi(QWidget *Circles)
    {
        Circles->setWindowTitle(QCoreApplication::translate("Circles", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Circles", "\320\232\321\200\321\203\320\263", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Circles", "\320\232\321\200\321\203\320\263\320\276\320\262\320\276\320\271 \321\201\320\265\320\272\321\202\320\276\321\200", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Circles", "\320\255\320\273\320\273\320\270\320\277\321\201", nullptr));
        label->setText(QCoreApplication::translate("Circles", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\275\321\203\320\266\320\275\321\203\321\216 \320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\321\214:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Circles: public Ui_Circles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIRCLES_H
