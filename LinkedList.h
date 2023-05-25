//
// Created by חי כרמי on 25/05/2023.
//

#ifndef UNTITLED112_LINKEDLIST_H
#define UNTITLED112_LINKEDLIST_H
#include <iostream>
#include "Customer.h"
using namespace std;


class LinkedList {
private:
    class Node { // Nested class to represent each node in the linked list
    private:
        Person *value; // Pointer to an object of MyNumber class
        Node *next; // Pointer to the next node in the list
    public:
        // Getter and setter functions for the private members
        Person *get_value() { return value; }
        Node *get_next() { return next; }
        void set_next(Node *next_node) { next = next_node; }
        void setValue(Person *value) { Node::value = value; }

        // Destructor to free the memory occupied by the MyNumber object
//            ~Node() { delete value; }

        // Copy constructor
        Node(const Node &other);
        Node(Person* value= nullptr, Node* next= nullptr) : value(value), next(next) {}

    };////end of node

    Node *head; // Pointer to the first node in the list
    int size = 0; // Size of the linked list
public:
    // Default constructor
    LinkedList();

    // Copy constructor
    LinkedList(const LinkedList &other);

    // Destructor
    ~ LinkedList();
    void add_Person(Person *person_add);

    void print_listy();
    bool check_id_employee(long id);
    bool check_id_custeomer(long id);
    void cin_buy(double buy);
    void cin_salary(float salary);
    float average_salaries();
    void counter_pepole(int &counter_emplyee, int &counter_Customer );







}; ////end of class LinkedList





#endif //UNTITLED112_LINKEDLIST_H
