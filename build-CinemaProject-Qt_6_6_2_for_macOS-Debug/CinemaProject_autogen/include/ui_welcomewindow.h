/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *Greeting;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(829, 589);
        Greeting = new QLabel(WelcomeWindow);
        Greeting->setObjectName("Greeting");
        Greeting->setGeometry(QRect(50, 50, 221, 31));
        label_2 = new QLabel(WelcomeWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 130, 581, 291));
        pushButton = new QPushButton(WelcomeWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 470, 100, 32));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        Greeting->setText(QCoreApplication::translate("WelcomeWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Hello, </span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("WelcomeWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
