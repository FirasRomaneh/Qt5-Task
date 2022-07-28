#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "mainwindow.h"
#include "user.h"
#include "ControllerUsers.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    QVector<User*> data1 = ControllerUsers::getUesrs();
    for(auto i: data1){
        ui->listWidget->addItem(i->getName());
    }
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{
    hide();
    MainWindow *main;
    main = new MainWindow(this);
    main->show();
}
