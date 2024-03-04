/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *Username;
    QLineEdit *Password;
    QLineEdit *CPassword;
    QLabel *UsernameStatus;
    QLabel *PasswordStatus;
    QComboBox *Day;
    QComboBox *Month;
    QComboBox *Year;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *BirthStatus;
    QGroupBox *groupBox;
    QRadioButton *Male;
    QRadioButton *Female;
    QGroupBox *groupBox_2;
    QRadioButton *User;
    QRadioButton *Admin;
    QGroupBox *groupBox_3;
    QCheckBox *Action;
    QCheckBox *Romance;
    QCheckBox *Horror;
    QCheckBox *Comedy;
    QCheckBox *Drama;
    QCheckBox *Other;
    QPushButton *Register;
    QLabel *FieldsStatus;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(826, 589);
        label = new QLabel(RegisterWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 71, 16));
        label_2 = new QLabel(RegisterWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 61, 16));
        label_3 = new QLabel(RegisterWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 120, 121, 16));
        Username = new QLineEdit(RegisterWindow);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(130, 20, 113, 21));
        Password = new QLineEdit(RegisterWindow);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(130, 70, 113, 21));
        Password->setEchoMode(QLineEdit::Password);
        CPassword = new QLineEdit(RegisterWindow);
        CPassword->setObjectName("CPassword");
        CPassword->setGeometry(QRect(150, 120, 113, 21));
        CPassword->setEchoMode(QLineEdit::Password);
        UsernameStatus = new QLabel(RegisterWindow);
        UsernameStatus->setObjectName("UsernameStatus");
        UsernameStatus->setGeometry(QRect(350, 20, 171, 16));
        PasswordStatus = new QLabel(RegisterWindow);
        PasswordStatus->setObjectName("PasswordStatus");
        PasswordStatus->setGeometry(QRect(350, 120, 201, 20));
        Day = new QComboBox(RegisterWindow);
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->addItem(QString());
        Day->setObjectName("Day");
        Day->setGeometry(QRect(20, 220, 103, 32));
        Month = new QComboBox(RegisterWindow);
        Month->addItem(QString());
        Month->addItem(QString());
        Month->addItem(QString());
        Month->addItem(QString());
        Month->addItem(QString());
        Month->addItem(QString());
        Month->addItem(QString());
        Month->addItem(QString());
        Month->addItem(QString());
        Month->addItem(QString());
        Month->addItem(QString());
        Month->addItem(QString());
        Month->setObjectName("Month");
        Month->setGeometry(QRect(140, 220, 103, 32));
        Year = new QComboBox(RegisterWindow);
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->addItem(QString());
        Year->setObjectName("Year");
        Year->setGeometry(QRect(270, 220, 103, 32));
        label_4 = new QLabel(RegisterWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 200, 41, 16));
        label_6 = new QLabel(RegisterWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(160, 200, 71, 16));
        label_7 = new QLabel(RegisterWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(290, 200, 71, 16));
        label_8 = new QLabel(RegisterWindow);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 160, 121, 16));
        BirthStatus = new QLabel(RegisterWindow);
        BirthStatus->setObjectName("BirthStatus");
        BirthStatus->setGeometry(QRect(410, 220, 121, 20));
        groupBox = new QGroupBox(RegisterWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 310, 120, 80));
        Male = new QRadioButton(groupBox);
        Male->setObjectName("Male");
        Male->setGeometry(QRect(0, 20, 99, 20));
        Female = new QRadioButton(groupBox);
        Female->setObjectName("Female");
        Female->setGeometry(QRect(0, 50, 99, 20));
        groupBox_2 = new QGroupBox(RegisterWindow);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(190, 310, 120, 80));
        User = new QRadioButton(groupBox_2);
        User->setObjectName("User");
        User->setGeometry(QRect(0, 20, 99, 20));
        Admin = new QRadioButton(groupBox_2);
        Admin->setObjectName("Admin");
        Admin->setGeometry(QRect(0, 50, 99, 20));
        groupBox_3 = new QGroupBox(RegisterWindow);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(20, 440, 301, 121));
        Action = new QCheckBox(groupBox_3);
        Action->setObjectName("Action");
        Action->setGeometry(QRect(10, 30, 85, 20));
        Romance = new QCheckBox(groupBox_3);
        Romance->setObjectName("Romance");
        Romance->setGeometry(QRect(10, 90, 85, 20));
        Horror = new QCheckBox(groupBox_3);
        Horror->setObjectName("Horror");
        Horror->setGeometry(QRect(170, 60, 85, 20));
        Comedy = new QCheckBox(groupBox_3);
        Comedy->setObjectName("Comedy");
        Comedy->setGeometry(QRect(10, 60, 85, 20));
        Drama = new QCheckBox(groupBox_3);
        Drama->setObjectName("Drama");
        Drama->setGeometry(QRect(170, 30, 85, 20));
        Other = new QCheckBox(groupBox_3);
        Other->setObjectName("Other");
        Other->setGeometry(QRect(170, 90, 85, 20));
        Register = new QPushButton(RegisterWindow);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(500, 490, 100, 32));
        FieldsStatus = new QLabel(RegisterWindow);
        FieldsStatus->setObjectName("FieldsStatus");
        FieldsStatus->setGeometry(QRect(330, 500, 161, 20));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterWindow", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWindow", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWindow", "Confirm Passowrd:", nullptr));
        UsernameStatus->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">*Already Existing</span></p></body></html>", nullptr));
        PasswordStatus->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">*Passwords don't match</span></p></body></html>", nullptr));
        Day->setItemText(0, QCoreApplication::translate("RegisterWindow", "1", nullptr));
        Day->setItemText(1, QCoreApplication::translate("RegisterWindow", "2", nullptr));
        Day->setItemText(2, QCoreApplication::translate("RegisterWindow", "3", nullptr));
        Day->setItemText(3, QCoreApplication::translate("RegisterWindow", "4", nullptr));
        Day->setItemText(4, QCoreApplication::translate("RegisterWindow", "5", nullptr));
        Day->setItemText(5, QCoreApplication::translate("RegisterWindow", "6", nullptr));
        Day->setItemText(6, QCoreApplication::translate("RegisterWindow", "7", nullptr));
        Day->setItemText(7, QCoreApplication::translate("RegisterWindow", "8", nullptr));
        Day->setItemText(8, QCoreApplication::translate("RegisterWindow", "9", nullptr));
        Day->setItemText(9, QCoreApplication::translate("RegisterWindow", "10", nullptr));
        Day->setItemText(10, QCoreApplication::translate("RegisterWindow", "11", nullptr));
        Day->setItemText(11, QCoreApplication::translate("RegisterWindow", "12", nullptr));
        Day->setItemText(12, QCoreApplication::translate("RegisterWindow", "13", nullptr));
        Day->setItemText(13, QCoreApplication::translate("RegisterWindow", "14", nullptr));
        Day->setItemText(14, QCoreApplication::translate("RegisterWindow", "15", nullptr));
        Day->setItemText(15, QCoreApplication::translate("RegisterWindow", "16", nullptr));
        Day->setItemText(16, QCoreApplication::translate("RegisterWindow", "17", nullptr));
        Day->setItemText(17, QCoreApplication::translate("RegisterWindow", "18", nullptr));
        Day->setItemText(18, QCoreApplication::translate("RegisterWindow", "19", nullptr));
        Day->setItemText(19, QCoreApplication::translate("RegisterWindow", "20", nullptr));
        Day->setItemText(20, QCoreApplication::translate("RegisterWindow", "21", nullptr));
        Day->setItemText(21, QCoreApplication::translate("RegisterWindow", "22", nullptr));
        Day->setItemText(22, QCoreApplication::translate("RegisterWindow", "23", nullptr));
        Day->setItemText(23, QCoreApplication::translate("RegisterWindow", "24", nullptr));
        Day->setItemText(24, QCoreApplication::translate("RegisterWindow", "25", nullptr));
        Day->setItemText(25, QCoreApplication::translate("RegisterWindow", "26", nullptr));
        Day->setItemText(26, QCoreApplication::translate("RegisterWindow", "27", nullptr));
        Day->setItemText(27, QCoreApplication::translate("RegisterWindow", "28", nullptr));
        Day->setItemText(28, QCoreApplication::translate("RegisterWindow", "29", nullptr));
        Day->setItemText(29, QCoreApplication::translate("RegisterWindow", "30", nullptr));
        Day->setItemText(30, QCoreApplication::translate("RegisterWindow", "31", nullptr));

        Month->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan", nullptr));
        Month->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        Month->setItemText(2, QCoreApplication::translate("RegisterWindow", "March", nullptr));
        Month->setItemText(3, QCoreApplication::translate("RegisterWindow", "April", nullptr));
        Month->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        Month->setItemText(5, QCoreApplication::translate("RegisterWindow", "June", nullptr));
        Month->setItemText(6, QCoreApplication::translate("RegisterWindow", "July", nullptr));
        Month->setItemText(7, QCoreApplication::translate("RegisterWindow", "Aug", nullptr));
        Month->setItemText(8, QCoreApplication::translate("RegisterWindow", "Sep", nullptr));
        Month->setItemText(9, QCoreApplication::translate("RegisterWindow", "Oct", nullptr));
        Month->setItemText(10, QCoreApplication::translate("RegisterWindow", "Nov", nullptr));
        Month->setItemText(11, QCoreApplication::translate("RegisterWindow", "Dec", nullptr));

        Year->setItemText(0, QCoreApplication::translate("RegisterWindow", "2024", nullptr));
        Year->setItemText(1, QCoreApplication::translate("RegisterWindow", "2023", nullptr));
        Year->setItemText(2, QCoreApplication::translate("RegisterWindow", "2022", nullptr));
        Year->setItemText(3, QCoreApplication::translate("RegisterWindow", "2021", nullptr));
        Year->setItemText(4, QCoreApplication::translate("RegisterWindow", "2020", nullptr));
        Year->setItemText(5, QCoreApplication::translate("RegisterWindow", "2019", nullptr));
        Year->setItemText(6, QCoreApplication::translate("RegisterWindow", "2018", nullptr));
        Year->setItemText(7, QCoreApplication::translate("RegisterWindow", "2017", nullptr));
        Year->setItemText(8, QCoreApplication::translate("RegisterWindow", "2016", nullptr));
        Year->setItemText(9, QCoreApplication::translate("RegisterWindow", "2015", nullptr));
        Year->setItemText(10, QCoreApplication::translate("RegisterWindow", "2014", nullptr));
        Year->setItemText(11, QCoreApplication::translate("RegisterWindow", "2013", nullptr));
        Year->setItemText(12, QCoreApplication::translate("RegisterWindow", "2012", nullptr));
        Year->setItemText(13, QCoreApplication::translate("RegisterWindow", "2011", nullptr));
        Year->setItemText(14, QCoreApplication::translate("RegisterWindow", "2010", nullptr));
        Year->setItemText(15, QCoreApplication::translate("RegisterWindow", "2009", nullptr));
        Year->setItemText(16, QCoreApplication::translate("RegisterWindow", "2008", nullptr));
        Year->setItemText(17, QCoreApplication::translate("RegisterWindow", "2007", nullptr));
        Year->setItemText(18, QCoreApplication::translate("RegisterWindow", "2006", nullptr));
        Year->setItemText(19, QCoreApplication::translate("RegisterWindow", "2005", nullptr));
        Year->setItemText(20, QCoreApplication::translate("RegisterWindow", "2004", nullptr));
        Year->setItemText(21, QCoreApplication::translate("RegisterWindow", "2003", nullptr));
        Year->setItemText(22, QCoreApplication::translate("RegisterWindow", "2002", nullptr));
        Year->setItemText(23, QCoreApplication::translate("RegisterWindow", "2001", nullptr));
        Year->setItemText(24, QCoreApplication::translate("RegisterWindow", "2000", nullptr));
        Year->setItemText(25, QCoreApplication::translate("RegisterWindow", "1999", nullptr));
        Year->setItemText(26, QCoreApplication::translate("RegisterWindow", "1998", nullptr));
        Year->setItemText(27, QCoreApplication::translate("RegisterWindow", "1997", nullptr));
        Year->setItemText(28, QCoreApplication::translate("RegisterWindow", "1996", nullptr));
        Year->setItemText(29, QCoreApplication::translate("RegisterWindow", "1995", nullptr));
        Year->setItemText(30, QCoreApplication::translate("RegisterWindow", "1994", nullptr));
        Year->setItemText(31, QCoreApplication::translate("RegisterWindow", "1993", nullptr));
        Year->setItemText(32, QCoreApplication::translate("RegisterWindow", "1992", nullptr));
        Year->setItemText(33, QCoreApplication::translate("RegisterWindow", "1991", nullptr));
        Year->setItemText(34, QCoreApplication::translate("RegisterWindow", "1990", nullptr));
        Year->setItemText(35, QCoreApplication::translate("RegisterWindow", "1989", nullptr));
        Year->setItemText(36, QCoreApplication::translate("RegisterWindow", "1988", nullptr));
        Year->setItemText(37, QCoreApplication::translate("RegisterWindow", "1987", nullptr));
        Year->setItemText(38, QCoreApplication::translate("RegisterWindow", "1986", nullptr));
        Year->setItemText(39, QCoreApplication::translate("RegisterWindow", "1985", nullptr));

        label_4->setText(QCoreApplication::translate("RegisterWindow", "Day:", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterWindow", "Month:", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterWindow", "Year:", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterWindow", "Date of Birth:", nullptr));
        BirthStatus->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">*Age is less than 12</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        Male->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        Female->setText(QCoreApplication::translate("RegisterWindow", "Female:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        User->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        Admin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("RegisterWindow", "Favorite Genre(s)", nullptr));
        Action->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        Romance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        Horror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        Comedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        Drama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        Other->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        Register->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        FieldsStatus->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">*All fields must be filled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
