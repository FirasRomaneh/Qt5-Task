#ifndef CONTROLLERUSERS_H
#define CONTROLLERUSERS_H

#include <QMainWindow>
#include "secondwindow.h"
#include "mainwindow.h"
#include "user.h"


class ControllerUsers: public QObject{
public:
    ControllerUsers();
    ~ControllerUsers();

private slots:
    void showSecond(User*);
    void showMain();


private:
    MainWindow* main;
    SecondWindow* second;
    QVector<User*> data1;
};


#endif // CONTROLLERUSERS_H
