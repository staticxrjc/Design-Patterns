#include <employeeEngineer.h>
#include <iostream>

employee* employeeEngineer::clone() {
    return new employeeEngineer;
}
void employeeEngineer::employee_type() {
    std::cout << "employeeEngineer\n";
}