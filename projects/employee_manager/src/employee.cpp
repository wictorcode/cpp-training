#include "employee.h"
#include <iostream>

// TODO -- implement the rest of the methods

Employee::Employee() {}

Employee::~Employee() {}

void Employee::setSalary(int newSalary) {
    this->salary = newSalary;
}

int Employee::getSalary() {
    return this->salary;
}

/**
 * Increases the salary of the employee by a certain percentage.
 * The new salary is automatically floored (if 1057.7 it becomes 1057) 
 * as it removes the decimals.
 * @return The new salary
 */
int Employee::increaseSalary(float percentageIncrease) {
    this->salary = (int)this->salary + this->salary * (percentageIncrease / 100);
    return this->salary;
}