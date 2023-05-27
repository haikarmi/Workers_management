//
// Created by חי כרמי on 24/05/2023.
//

#include "Person.h"
#include "cstring"
#include <iostream>
using namespace std;


Person::Person(char *name, long id) {
    this->name = new char[strlen(name) + 1]; // Allocate memory for the color string
    strcpy(this->name, name); // Copy the given color value to the color string
    this->id=id;
}

Person::Person(const Person &person) {
    this->name = new char[strlen(person.name) + 1]; // Allocate memory for the color string
    strcpy(this->name,person.name);
    this->id=person.id;


}



Person::~Person() {
    delete[] name; // Deallocate the memory for the color

}

