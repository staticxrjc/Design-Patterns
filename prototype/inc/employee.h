#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

class employee {
private:
    virtual employee* clone() = 0;
public:
    virtual void employee_type() = 0;
friend class employeeFactory;
};

#endif