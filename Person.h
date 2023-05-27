//
// Created by חי כרמי on 24/05/2023.
//

#ifndef UNTITLED112_PERSON_H
#define UNTITLED112_PERSON_H

class Person {
private:
    char* name; // Consider using std::string for better memory management
    long id;

public:
    Person(char* name, long id);
    Person(const Person& person);

    // Abstract function for printing person's information
    virtual void print() const = 0;

    virtual ~Person(); // Virtual destructor for proper cleanup

    // Getter functions for accessing member variables
    char* get_name() const { return name; } // Consider using const std::string& or std::string
    long get_id() const { return id; }

};

#endif //UNTITLED112_PERSON_H
