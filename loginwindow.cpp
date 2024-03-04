#include "loginwindow.h"
#include "./ui_loginwindow.h"
#include "welcomewindow.h"
#include "registerwindow.h"
#include "Users.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui ->Status->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}



void LoginWindow::on_Login_clicked()
{
    for(int i=0; i<usersCount; i++)
    {
        if(usernames[i]== ui->Username->text())
        {
            if(passwords[i]==ui->Password->text())
            {
                hide();
                WelcomeWindow *welcomeWindow = new WelcomeWindow(ages[i],usernames[i],this);
                welcomeWindow->show();
            }
        }
        else{
            ui->Status->setVisible(true);
        }

    }
}


void LoginWindow::on_pushButton_2_clicked()
{
    hide();
    RegisterWindow *R = new RegisterWindow(this);
    R->show();

}

