#ifndef EMPLOYEEDEVELOPER_H
#define EMPLOYEEDEVELOPER_H
#include <employee.h>

class employeeDeveloper : public employee {
public:
    employee* clone();
    void employee_type() override;
};

#endif