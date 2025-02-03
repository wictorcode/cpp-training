#include <iostream>
#include "employee.h"
int main() {
    std::cout << "Employee Management" << std::endl;
    Employee myEmployee;
    myEmployee.setSalary(1000);
    myEmployee.increaseSalary(5.77f);
    std::cout << myEmployee.getSalary() << std::endl;
    return 0;
}