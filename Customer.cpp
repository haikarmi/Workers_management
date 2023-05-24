//
// Created by חי כרמי on 24/05/2023.
//

#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer(char *name, long id, double *paylist, int size) : Person(name,id){
    this->size=size;
    this->paylist=new double [size];
    for (int i = 0; i < size; ++i) {
        this->paylist[i]= paylist[i];
    }

}

Customer::Customer(const Customer &other): Person((other)) {
    this->size=other.size;
    this->paylist=new double [size];
    for (int i = 0; i < size; ++i) {
        this->paylist[i]= other.paylist[i];
    }
}



Customer::~Customer() {
    delete[]paylist;

}

void Customer::print() const {
    cout<< " the name is: "<< get_name()<<endl;
    cout<< " the id num is: "<< get_id()<< endl;
    cout << " the pay list is: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << "the lest pay num " << (i + 1) << ':' << paylist[i] << '$' << endl;
    }
}
