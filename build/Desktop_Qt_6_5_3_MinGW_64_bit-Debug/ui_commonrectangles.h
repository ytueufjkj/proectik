/********************************************************************************
** Form generated from reading UI file 'commonrectangles.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMONRECTANGLES_H
#define UI_COMMONRECTANGLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Commonrectangles
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Commonrectangles)
    {
        if (Commonrectangles->objectName().isEmpty())
            Commonrectangles->setObjectName("Commonrectangles");
        Commonrectangles->resize(700, 700);
        widget = new QWidget(Commonrectangles);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 150, 481, 471));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Commonrectangles);

        QMetaObject::connectSlotsByName(Commonrectangles);
    } // setupUi

    void retranslateUi(QWidget *Commonrectangles)
    {
        Commonrectangles->setWindowTitle(QCoreApplication::translate("Commonrectangles", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Commonrectangles", "\320\243 \320\274\320\265\320\275\321\217 \320\265\321\201\321\202\321\214 H \320\270 A", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Commonrectangles", "\320\243 \320\274\320\265\320\275\321\217 \320\265\321\201\321\202\321\214 A, B, C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Commonrectangles: public Ui_Commonrectangles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMONRECTANGLES_H
