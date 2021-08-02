#include <employeeFactory.h>
#include <employeeDeveloper.h>
#include <employeeEngineer.h>

employee* m_prototypes[2] = {new employeeDeveloper, new employeeEngineer};

employee* employeeFactory::make_employee(int choice) {
    return m_prototypes[choice]->clone();
}