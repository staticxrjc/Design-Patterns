#include <employeeEngineer.h>

employee* employeeEngineer::clone() {
    return new employeeEngineer;
}
void employeeEngineer::employee_type() {
    std::cout << "employeeEngineer\n";
}