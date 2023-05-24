//
// Created by חי כרמי on 24/05/2023.
//

#ifndef UNTITLED112_CUSTOMER_H
#define UNTITLED112_CUSTOMER_H
#include "Person.h"



class Customer: public virtual Person {
private:
    double * paylist;
    int size;
public:
    Customer(char *name, long id, double * paylist, int size);
    Customer(const Customer& other);
    virtual ~ Customer();
    virtual void print() const;
    virtual void buy(double buy);


};


#endif //UNTITLED112_CUSTOMER_H
