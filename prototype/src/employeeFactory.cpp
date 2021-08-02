#include <employeeFactory.h>
#include <employeeDeveloper.h>
#include <employeeEngineer.h>

employee* employeeFactory::make_employee(int choice) {
    return m_prototypes[choice]->clone();
}