#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class employee {
public:
    virtual employee* clone() = 0;
    virtual void employee_type() = 0;
};

#endif