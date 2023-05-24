//
// Created by חי כרמי on 25/05/2023.
//

#include "LinkedList.h"
#include "Customer.h"

using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}


LinkedList::~LinkedList() { // destructor - clean the heap
    Node *temp1 = head;
    // Delete all nodes in the list
    while (temp1 != nullptr) {
        Node *next = temp1->get_next();
        delete temp1->get_value();
        temp1 = next;
    }
}




