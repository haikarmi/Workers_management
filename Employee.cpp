//
// Created by חי כרמי on 24/05/2023.
//

#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(char *name, long id, float salary) : Person(name,id){
    this->salary=salary;

}

Employee::Employee(const Employee &other):Person(other) {
    this->salary=other.salary;

}

void Employee::print() const {
    cout<< " the name is: "<< get_name()<<endl;
    cout<< " the id num is: "<< get_id()<< endl;
    cout<<" the salary is: "<<salary<<'$'<<endl;
}


