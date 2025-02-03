#pragma once
#include <iostream>
#include "employee_enums.h"

class Employee {
private:
    std::string name;
    int age;
    eDEPARTMENT department;
    eEDUCATION education;
    eGENDER gender;
    eMARITAL_STATUS maritalStatus;
    int salary;
public:
    Employee();
    ~Employee();
    //--------------------------------------
    // SETTERS
    //--------------------------------------
    void setName(std::string newName);
    void setAge(int newAge);
    void setDepartment(eDEPARTMENT newDepartment);
    void setEducation(eEDUCATION newEducation);
    void setGender(eGENDER newGender);
    void setMaritalStatus(eMARITAL_STATUS newStatus);
    void setSalary(int newSalary);
    //--------------------------------------
    // GETTERS
    //--------------------------------------
    std::string getName();
    int getAge();
    eDEPARTMENT getDepartment();
    eEDUCATION getEducation();
    eGENDER getGender();
    eMARITAL_STATUS getMaritalStatus();
    int getSalary();
    //--------------------------------------
    // METHODS
    //--------------------------------------
    int increaseSalary(float percentageIncrease, bool ceil);
    //--------------------------------------
    // MISC
    //--------------------------------------
    std::string toStringCSV();
};