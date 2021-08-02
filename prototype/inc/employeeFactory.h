#ifndef EMPLOYEEFACTORY_H
#define EMPLOYEEFACTORY_H
#include <employee.h>

class employeeFactory {
private:
    employee* m_prototypes[2];
public:
    employee* make_employee(int);
};

#endif