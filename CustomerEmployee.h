//
// Created by חי כרמי on 24/05/2023.
//

#ifndef UNTITLED112_CUSTOMEREMPLOYEE_H
#define UNTITLED112_CUSTOMEREMPLOYEE_H
#include "Person.h"
#include "Customer.h"
#include "Employee.h"


class CustomerEmployee: public Customer, public Employee{
public:

    CustomerEmployee(char *name, long id, float salary, double *paylist, int size);
    virtual void print() const;
};


#endif //UNTITLED112_CUSTOMEREMPLOYEE_H
