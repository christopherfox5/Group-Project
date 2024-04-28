// Employee.Profile.cpp
// Created by Chris fox
// Employee profile definitions
//-------------------------------------------------
#include "Employee.Profile.h"
#include <iostream>
#include <cstdlib>

std::string department, name, firstName, lastName;
int selection, tempId;
bool valid = false;

// Department getters and setters
//-------------------------------------------------
const std::string &Employee_profile::getEmpDepartment() const {
    // Asking for user input for department
    while(valid == false) {
        std::cout << "1. Management \n2. Sales \n3. Engineering \n4. H.R. \nEnter employee department number: " ;
        std::cin >> selection;
        switch (selection) {
            case 1:
                department = "Management";
                valid = true;
                break;
            case 2:
                department = "Sales";
                valid = true;
                break;
            case 3:
                department = "Engineering";
                valid = true;
                break;
            case 4:
                department = "H.R.";
                valid = true;
                break;
            default:
                std::cout << "* Please enter valid department number [1-4] *\n";
                break;
        }
    }
    return department;
}

void Employee_profile::setEmpDepartment(const std::string &empDepartment) {
    emp_Department = department;
}


// Name getters and setters
// Asks for user first and last name, then combines them in one string.
//-------------------------------------------------
const std::string &Employee_profile::getEmpNames() const {
    std::cout << "Enter employee first name: ";
    std::cin >> firstName;
    std::cout << "Enter Employee last name: ";
    std::cin >> lastName;
    name = firstName + " " + lastName;
    return name;
}

void Employee_profile::setEmpNames(const std::string &empNames) {
    emp_Names = name;
}


// ID getters and setters
//-------------------------------------------------
int Employee_profile::getEmpId() const {
    // Random number generator from 1 to 1000
    tempId = rand() % 1000 + 1;
    return tempId;
}

void Employee_profile::setEmpId(int empId) {
    emp_Id = tempId;
}
