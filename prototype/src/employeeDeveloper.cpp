#include <employeeDeveloper.h>
#include <iostream>

employee* employeeDeveloper::clone() {
    return new employeeDeveloper;
}
void employeeDeveloper::employee_type() {
    std::cout << "employeeDeveloper\n";
}