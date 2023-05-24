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

CustomerEmployee::CustomerEmployee(const CustomerEmployee &other): Customer(other) , Employee(other), Person(other){


}

void CustomerEmployee::buy(double buy) {
    Customer::buy(buy=buy*0.9);
}
