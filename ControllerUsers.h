#ifndef CONTROLLERUSERS_H
#define CONTROLLERUSERS_H

#include "user.h"

class ControllerUsers{
public:
    static void AddUser(User* u){
        data1.append(u);
    }
    static QVector<User*> getUesrs(){
        return data1;
    }
    static QVector<User*> data1;

};


#endif // CONTROLLERUSERS_H
