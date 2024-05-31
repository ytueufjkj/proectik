/********************************************************************************
** Form generated from reading UI file 'rhombus.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RHOMBUS_H
#define UI_RHOMBUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rhombus
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Rhombus)
    {
        if (Rhombus->objectName().isEmpty())
            Rhombus->setObjectName("Rhombus");
        Rhombus->resize(700, 700);
        verticalLayoutWidget = new QWidget(Rhombus);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(80, 180, 511, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(Rhombus);

        QMetaObject::connectSlotsByName(Rhombus);
    } // setupUi

    void retranslateUi(QWidget *Rhombus)
    {
        Rhombus->setWindowTitle(QCoreApplication::translate("Rhombus", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Rhombus", "\320\243 \320\274\320\265\320\275\321\217 \320\265\321\201\321\202\321\214 A \320\270 \316\261", nullptr));
        pushButton->setText(QCoreApplication::translate("Rhombus", "\320\243 \320\274\320\265\320\275\321\217 \320\265\321\201\321\202\321\214 d1 \320\270 d2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rhombus: public Ui_Rhombus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RHOMBUS_H
