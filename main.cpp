#include "mainwindow.h"
#include "secondwindow.h"
#include <iostream>
#include <QApplication>
#include "ControllerUsers.h"

QVector<User*> ControllerUsers::data1 = QVector<User*>();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SecondWindow w;
    w.show();
    return a.exec();
}
