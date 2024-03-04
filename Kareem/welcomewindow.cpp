#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "QPixmap"
#include "loginwindow.h"
WelcomeWindow::WelcomeWindow( int age, QString username,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    QString age_str = QString::number(age);
    QString newtext = "Hello, "+username+" "+ age_str;
    ui->Greeting->setText(newtext);

    QPixmap pix(":/cinemapic.jpeg");
    int w = ui->label_2->width();
    int h = ui->label_2->height();
    ui->label_2->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));



}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_pushButton_clicked()
{
    hide();
    LoginWindow *w = new LoginWindow(this);
    w->show();
}

