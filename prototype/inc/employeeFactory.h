#ifndef EMPLOYEEFACTORY_H
#define EMPLOYEEFACTORY_H
#include <employeeDeveloper.h>
#include <employeeEngineer.h>

class employeeFactory {
private:
    employee* m_prototypes[2] = {new employeeDeveloper, new employeeEngineer};
public:
    employee* make_employee(int);
};

#endif