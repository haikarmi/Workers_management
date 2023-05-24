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
        Customer *value; // Pointer to an object of MyNumber class
        Node *next; // Pointer to the next node in the list
    public:
        // Getter and setter functions for the private members
        Customer *get_value() { return value; }
        Node *get_next() { return next; }
        void set_next(Node *next_node) { next = next_node; }
        void setValue(Customer *value) { Node::value = value; }

        // Destructor to free the memory occupied by the MyNumber object
//            ~Node() { delete value; }

        // Copy constructor
        Node(const Node &other);
        Node(Customer* value= nullptr, Node* next= nullptr) : value(value), next(next) {}

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
    void add_customer(Customer *Shape_add);





}; ////end of class LinkedList





#endif //UNTITLED112_LINKEDLIST_H
