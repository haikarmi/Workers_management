#include <iostream>
#include "Employee.h"
#include "Customer.h"
#include "Person.h"
#include "CustomerEmployee.h"

using namespace std;


int main() {
    double pylist[5]{3.4, 2.6, 4.5, 9.3, 6.12};
//    char * hai={"hai"};

    Employee e1("HAI", 207265687, 9999);
    e1.print();
    Customer c1("YAGEL", 207456687, pylist, 5);
    c1.print();
    CustomerEmployee C9("HAI",2456787,999,pylist,5);
    C9.print();
    return 0;
}