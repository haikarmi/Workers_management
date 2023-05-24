//
// Created by חי כרמי on 24/05/2023.
//

#include "CustomerEmployee.h"
#include <iostream>
using namespace std;



CustomerEmployee::CustomerEmployee(char *name, long id, float salary, double *paylist, int size):
Customer(name,id,paylist,size), Employee(name,id,salary), Person(name,id) {

}

void CustomerEmployee::print() const {
    Customer::print();
    cout<<" the salary is: "<<get_salary()<<'$'<<endl;


}
