/********************************************************************************
** Form generated from reading UI file 'rectangles.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTANGLES_H
#define UI_RECTANGLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rectangles
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Rectangles)
    {
        if (Rectangles->objectName().isEmpty())
            Rectangles->setObjectName("Rectangles");
        Rectangles->resize(700, 700);
        label = new QLabel(Rectangles);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 30, 581, 91));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        widget = new QWidget(Rectangles);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 140, 381, 421));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Rectangles);

        QMetaObject::connectSlotsByName(Rectangles);
    } // setupUi

    void retranslateUi(QWidget *Rectangles)
    {
        Rectangles->setWindowTitle(QCoreApplication::translate("Rectangles", "Form", nullptr));
        label->setText(QCoreApplication::translate("Rectangles", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\275\321\203\320\266\320\275\321\213\320\271 \321\202\320\270\320\277 \321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260:", nullptr));
        pushButton->setText(QCoreApplication::translate("Rectangles", "\320\240\320\260\320\262\320\275\320\276\321\201\321\202\320\276\321\200\320\276\320\275\320\275\320\270\320\271", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Rectangles", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\321\213\320\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Rectangles", "\320\236\320\261\321\211\320\270\320\271 \320\262\320\270\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rectangles: public Ui_Rectangles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTANGLES_H
