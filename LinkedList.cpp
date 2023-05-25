//
// Created by חי כרמי on 25/05/2023.
//

#include "LinkedList.h"
#include "Customer.h"
#include "Employee.h"
#include "CustomerEmployee.h"

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

void LinkedList::print_listy() {
    Node *temp = head;
    if (size == 0) {
        cout << "the list empty" << endl;
        return;
    }
    // Loop through each node in the list
    for (int i = 0; i < size; ++i) {
        // Print the decimal value of the MyNumber object stored in the current node
        temp->get_value()->print();
        // Check if we've reached the end of the list (i.e. next node is null)
        if (temp->get_next() == nullptr) {
            // If so, print "nullptr" and return
            cout << "the next is nullptr" << endl;
            return;
        }
        // Move to the next node in the list
        temp = temp->get_next();
    }
}

void LinkedList::add_Person(Person *person_add) {

    Node *new_node = new Node();
    new_node->setValue(person_add);
    new_node->set_next(nullptr);
    if (head == nullptr) {
        head = new_node;
        ++size;
    } else if (head != nullptr) {
        Node *curr = head;
        while (curr->get_next() != nullptr) {
            curr = curr->get_next();
        }
        curr->set_next(new_node);
        ++size;
    }
}

LinkedList::LinkedList(const LinkedList &other) {

}

bool LinkedList::check_id_employee(long id) {
    Node *temp = head;
    Person *person = temp->get_value();

    for (int i = 0; i < size; ++i) {
        if (temp->get_value()->get_id() == id) {
            if (dynamic_cast<Employee *> (person) != nullptr)
            return true;

        } else
            temp = temp->get_next();
    }
    return false;

}

void LinkedList::cin_buy(double buy) {
    if (head == nullptr) {
        return;
    } else {
        Node *curr = head;
        while (curr != nullptr) {
            Person *person = curr->get_value();
            if (dynamic_cast<Customer *> (person) != nullptr) {
                Customer *customer = dynamic_cast<Customer *> (person);
                customer->buy(buy);

            }
            if (dynamic_cast<CustomerEmployee *> (person) != nullptr) {
                CustomerEmployee *customere_mployee = dynamic_cast<CustomerEmployee *> (person);
                customere_mployee->buy(buy);

            }
            curr = curr->get_next();
        }
    }
}

void LinkedList::cin_salary(float salary) {
    if (head == nullptr) {
        return;
    } else {
        Node *curr = head;
        while (curr != nullptr) {
            Person *person = curr->get_value();
            if (dynamic_cast<Employee *> (person) != nullptr) {
                Employee *employee = dynamic_cast<Employee *> (person);
                employee->set_salary(salary);

            }
            if (dynamic_cast<CustomerEmployee *> (person) != nullptr) {
                CustomerEmployee *customere_mployee = dynamic_cast<CustomerEmployee *> (person);
                customere_mployee->set_salary(salary);

            }
            curr = curr->get_next();
        }
    }
}

float LinkedList::average_salaries() {
    float sum=0;
    if (head == nullptr) {
        return 0;
    } else {
        Node *curr = head;
        while (curr != nullptr) {
            Person *person = curr->get_value();
            if (dynamic_cast<Employee *> (person) != nullptr) {
                Employee *employee = dynamic_cast<Employee *> (person);
                sum+=employee->get_salary();

            }
            if (dynamic_cast<CustomerEmployee *> (person) != nullptr) {
                CustomerEmployee *customere_mployee = dynamic_cast<CustomerEmployee *> (person);
                customere_mployee->get_salary();

            }
            curr = curr->get_next();
        }
    }
    return sum;
}

void LinkedList::counter_pepole(int &counter_emplyee, int &counter_Customer) {
    if (head == nullptr) {
        return ;
    } else {
        Node *curr = head;
        while (curr != nullptr) {
            Person *person = curr->get_value();
            if (dynamic_cast<CustomerEmployee *> (person) != nullptr) {
                counter_emplyee++;
                counter_Customer++;

            } else if (dynamic_cast<Employee *> (person) != nullptr) {
                counter_emplyee++;
            } else if (dynamic_cast<Customer *> (person) != nullptr) {
                counter_Customer++;
            }
            curr = curr->get_next();
        }
    }
}

bool LinkedList::check_id_custeomer(long id) {
    Node *temp = head;
    Person *person = temp->get_value();

    for (int i = 0; i < size; ++i) {
        if (temp->get_value()->get_id() == id) {
            if (dynamic_cast<Customer *> (person) != nullptr) {
                return true;
            }
        } else
            temp = temp->get_next();
    }
    return false;

}











