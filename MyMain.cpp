//
// Created by חי כרמי on 25/05/2023.
//

#include "MyMain.h"
#include "Person.h"
#include "Customer.h"
#include "Employee.h"
#include "CustomerEmployee.h"
#include <iostream>

using namespace std;
enum {
    Customery = 1, Employeey, Customer_employe
};


void MyMain::print_menu_main() {

    cout << "Please choose one of the following option" << endl;
    cout << "1.	Counting employees and counting customers" << endl;
    cout << "2. enter new objects in the list" << endl;
    cout << "3. Receiving a customer's ID number and amount and adding it to the customer's list" << endl;
    cout << "4. Obtaining an employee ID number and a new salary and adding it to the list of employees" << endl;
    cout << "5.	Printing the average salary of the employees " << endl;
    cout << "6.	Printing all people and their types " << endl;
    cout << "7. Ending everything and leaving" << endl;

}


MyMain::MyMain() {
    char *name = new char[20];
    long id;

    int choice2 = 0;
    do {

        print_menu_main();

        cin >> choice2;

        switch (choice2) {
            case 1: {
                int counter_employee = 0;
                int counter_customer = 0;
                list1.counter_pepole(counter_employee, counter_customer);
                cout << "the num of employee is: " << counter_employee << "\n";
                cout << "the num of customer is: " << counter_customer << "\n";

                break;
            }
            case 2: {
                int choice = 0;
                do {
                    cout << "Write down the number of the person you want\n"
                            "1.Customer\n"
                            "2.Employee\n"
                            "3. Customer and employee\n";

                    cin >> choice;
                } while (choice > 4);

                switch (choice) {
                    case Customery: {
                        int size;
                        cout << "enter name " << endl;
                        cin.ignore(1, '\n');
                        cin.get(name, 20);

                        cout << "enter id number " << endl;
                        cin >> id;

                        cout << "enter size of the paylist " << endl;
                        cin >> size;
                        double *paylist = new double[size];
                        for (int i = 0; i < size; ++i) {
                            cout << "enter the pay num  " << i + 1 << ")\n";
                            cin >> paylist[i];
                        }


                        Customer *customer = new Customer(name, id, paylist, size);
                        list1.add_Person(customer);
                        break;
                    }
                    case Employeey: {
                        float salary;

                        cout << "enter name " << endl;
                        cin.ignore(1, '\n');
                        cin.get(name, 20);

                        cout << "enter id number " << endl;
                        cin >> id;

                        cout << "enter salary " << endl;
                        cin >> salary;
                        Employee *employee = new Employee(name, id, salary);
                        list1.add_Person(employee);
                        break;


                    }
                    case Customer_employe: {
                        float salary;
                        int size;


                        cout << "enter name " << endl;
                        cin.ignore(1, '\n');
                        cin.get(name, 20);

                        cout << "enter id number " << endl;
                        cin >> id;

                        cout << "enter salary " << endl;
                        cin >> salary;

                        cout << "enter size of the paylist " << endl;
                        cin >> size;
                        double *paylist = new double[size];
                        for (int i = 0; i < size; ++i) {
                            cout << "enter the pay num\t\t" << i + 1 << ")\n";
                            cin >> paylist[i];
                            CustomerEmployee *customerEmployee = new CustomerEmployee(name, id, salary, paylist, size);
                            list1.add_Person(customerEmployee);
                        }
                        break;

                    }
                }
                break;


            }
            case 3: {
                long id;
                double sum;
                cout << "enter id number " << endl;
                cin >> id;
                if (list1.check_id_custeomer(id) == true) {
                    cout << "enter purchase amount " << endl;
                    cin >> sum;
                    list1.cin_buy(sum);
                } else {
                    cout << "No ID found " << endl;
                }
                break;

            }
            case 4: {
                long id;
                float salary;
                cout << "enter id number " << endl;
                cin >> id;
                if (list1.check_id_employee(id) == true) {
                    cout << "enter new salary " << endl;
                    cin >> salary;
                    list1.cin_salary(salary);
                } else {
                    cout << "No ID found " << endl;
                }

                break;
            }
            case 5: {
                cout << " the average salaries is \t" << list1.average_salaries() << endl;
                break;
            }
            case 6: {
                list1.print_listy();
                break;
            }
            default: {
                cout << "enter choice with 1-7" << endl;
                cin >> choice2;
            }
            case 7: {
                cout << "thank you " << endl;
                break;

            }

        }
    } while (choice2 < 7);


}