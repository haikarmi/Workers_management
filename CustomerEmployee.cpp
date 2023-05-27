//
// Created by חי כרמי on 24/05/2023.
//

#include "CustomerEmployee.h"
#include <iostream>
using namespace std;

CustomerEmployee::CustomerEmployee(char *name, long id, float salary, double *paylist, int size)
        : Customer(name, id, paylist, size), Employee(name, id, salary), Person(name, id) {
    // The constructor initializes the base classes using their respective constructors.
    // The order of initialization is determined by the order of inheritance in the class declaration.
    // Additional initialization logic can be added here if needed.
}

void CustomerEmployee::print() const {
    Customer::print();  // Call the print() function of the Customer base class
    cout << " the salary is: " << get_salary() << '$' << endl;
    // Additional printing logic can be added here if needed.
}

CustomerEmployee::CustomerEmployee(const CustomerEmployee &other)
        : Customer(other), Employee(other), Person(other) {
    // The copy constructor initializes the base classes using the copy constructors of the respective classes.
    // The order of initialization is determined by the order of inheritance in the class declaration.
    // Additional copy initialization logic can be added here if needed.
}

void CustomerEmployee::buy(double buy) {
    Customer::buy(buy = buy * 0.9);
    // Additional buying logic specific to CustomerEmployee can be added here if needed.
}
