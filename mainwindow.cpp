#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "user.h"
#include "ControllerUsers.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString name = ui->plainTextEdit->toPlainText();
    QString email = ui->plainTextEdit_2->toPlainText();
    QString password = ui->plainTextEdit_4->toPlainText();
    QString phone = ui->plainTextEdit_3->toPlainText();
    QString gender =  ui->comboBox->currentText();
    QString dob =  ui->dateEdit->date().toString("yyyy.MM.dd");
    User* uu = new User(name, email, password, phone, gender, dob);
    ControllerUsers::AddUser(uu);
    hide();
    sec = new SecondWindow(this);
    sec->show();
}
