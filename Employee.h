//
// Created by חי כרמי on 24/05/2023.
//

#ifndef UNTITLED112_EMPLOYEE_H
#define UNTITLED112_EMPLOYEE_H

#include "Person.h"


class Employee : public virtual Person {
private:
    float salary;

public:
    Employee(char *name, long id, float salary);

    Employee(const Employee &other);

     virtual void print() const;
     float get_salary() const {return salary;}
};

#endif //UNTITLED112_EMPLOYEE_H
