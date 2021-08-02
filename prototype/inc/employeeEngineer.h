#ifndef EMPLOYEEENGINEER_H
#define EMPLOYEEENGINEER_H
#include <employee.h>

class employeeEngineer : public employee {
public:
    employee* clone();
    void employee_type();
};
#endif