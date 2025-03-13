/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pb10;
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QPushButton *pb_coffee_100;
    QPushButton *pb_milk_150;
    QPushButton *pb_tea_200;
    QPushButton *pb_reset;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(290, 20, 221, 101));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName("pb10");
        pb10->setGeometry(QRect(20, 160, 171, 41));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName("pb50");
        pb50->setGeometry(QRect(20, 220, 171, 41));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName("pb100");
        pb100->setGeometry(QRect(20, 290, 171, 41));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName("pb500");
        pb500->setGeometry(QRect(20, 350, 171, 41));
        pb_coffee_100 = new QPushButton(Widget);
        pb_coffee_100->setObjectName("pb_coffee_100");
        pb_coffee_100->setGeometry(QRect(510, 160, 87, 26));
        pb_milk_150 = new QPushButton(Widget);
        pb_milk_150->setObjectName("pb_milk_150");
        pb_milk_150->setGeometry(QRect(510, 220, 87, 26));
        pb_tea_200 = new QPushButton(Widget);
        pb_tea_200->setObjectName("pb_tea_200");
        pb_tea_200->setGeometry(QRect(510, 290, 87, 26));
        pb_reset = new QPushButton(Widget);
        pb_reset->setObjectName("pb_reset");
        pb_reset->setGeometry(QRect(520, 385, 131, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        pb_coffee_100->setText(QCoreApplication::translate("Widget", "coffee", nullptr));
        pb_milk_150->setText(QCoreApplication::translate("Widget", "milk", nullptr));
        pb_tea_200->setText(QCoreApplication::translate("Widget", "tea", nullptr));
        pb_reset->setText(QCoreApplication::translate("Widget", "reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
