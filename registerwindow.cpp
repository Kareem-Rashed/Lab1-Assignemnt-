#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.h"
#include "welcomewindow.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->BirthStatus->setVisible(false);
    ui->PasswordStatus->setVisible(false);
    ui->FieldsStatus->setVisible(false);
    ui->UsernameStatus->setVisible(false);
}


RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_Register_clicked()
{
    ui->BirthStatus->setVisible(false);
    ui->PasswordStatus->setVisible(false);
    ui->FieldsStatus->setVisible(false);
    ui->UsernameStatus->setVisible(false);

    bool male = ui->Male->isChecked();
    bool female = ui->Female->isChecked();
    int year = (ui->Year->currentText()).toInt();
    int age = 2024-year;
    bool userType_USER = ui->User->isChecked();
    bool userType_ADMIN = ui->Admin->isChecked();
    bool action = ui->Action->isChecked();
    bool horror = ui->Horror->isChecked();
    bool comedy = ui->Comedy->isChecked();
    bool drama = ui->Drama->isChecked();
    bool romance = ui->Romance->isChecked();
    bool other = ui->Other->isChecked();


    int errors=0;

    for(int i=0; i<usersCount;i++)
    {
        if(usernames[i]==(ui->Username->text()))
        {
            ui->UsernameStatus->setVisible(true);
            errors+=1;
            break;
        }
    }

    if((ui->CPassword->text())!=(ui->Password->text()))
    {
        ui->PasswordStatus->setVisible(true);
        errors+=1;

    }
    if(age<12)
        ui->BirthStatus->setVisible(true);
    if((!action)&&(!comedy)&&(!horror)&&(!drama)&&(!romance)&&(!other))
    {
        ui->FieldsStatus->setVisible(true);
        errors+=1;
    }
    if((!male)&&(!female))
    {
        ui->FieldsStatus->setVisible(true);
        errors+=1;
    }
    if((!userType_ADMIN)&&(!userType_USER))
    {
        errors+=1;
        ui->FieldsStatus->setVisible(true);
    }



    if(errors==0)
    {
        usernames[usersCount]=ui->Username->text();
        passwords[usersCount]=ui->Password->text();
        ages[usersCount]=age;
        usersCount+=1;
        hide();
        WelcomeWindow *w = new WelcomeWindow(ages[usersCount]=age,ui->Username->text(),this);
        w->show();

    }











}

