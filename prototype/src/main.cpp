#include <employee.h>
#include <employeeFactory.h>

int main (){
    employeeFactory* employeeMaker = new employeeFactory;
    employee* developer1 = employeeMaker->make_employee(0);
    employee* engineer1 = employeeMaker->make_employee(1);

    developer1->employee_type();
    engineer1->employee_type();

    delete employeeMaker;
    delete developer1;
    delete engineer1;
    return 1;
}