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
    // Constructor
    Employee(char *name, long id, float salary);

    // Copy constructor
    Employee(const Employee &other);

    // Print function
    virtual void print() const;

    // Getter for salary
    float get_salary() const { return salary; }

    // Setter for salary
    float set_salary(float salary);
};

#endif //UNTITLED112_EMPLOYEE_H
