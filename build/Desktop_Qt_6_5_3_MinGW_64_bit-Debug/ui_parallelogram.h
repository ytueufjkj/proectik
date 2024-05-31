/********************************************************************************
** Form generated from reading UI file 'parallelogram.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARALLELOGRAM_H
#define UI_PARALLELOGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Parallelogram
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Parallelogram)
    {
        if (Parallelogram->objectName().isEmpty())
            Parallelogram->setObjectName("Parallelogram");
        Parallelogram->resize(700, 700);
        verticalLayoutWidget = new QWidget(Parallelogram);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 190, 661, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Parallelogram);

        QMetaObject::connectSlotsByName(Parallelogram);
    } // setupUi

    void retranslateUi(QWidget *Parallelogram)
    {
        Parallelogram->setWindowTitle(QCoreApplication::translate("Parallelogram", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Parallelogram", "\320\243 \320\274\320\265\320\275\321\217 \320\265\321\201\321\202\321\214 \320\220  \320\270 H", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Parallelogram", "\320\243 \320\274\320\265\320\275\321\217 \320\265\321\201\321\202\321\214 A , B \320\270 sin\316\261 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Parallelogram: public Ui_Parallelogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARALLELOGRAM_H
