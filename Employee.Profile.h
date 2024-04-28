// Employee.Profile.h
// Created by Chris fox
// Employee profile declarations
//-------------------------------------------------
#ifndef GROUP_PROJECT_EMPLOYEE_PROFILE_H
#define GROUP_PROJECT_EMPLOYEE_PROFILE_H
#include <iostream>

class Employee_profile {
private:
    std::string _empDepartment;
    std::string _empNames;
    int _empId;

public:

    const std::string &getEmpDepartment() const;
    void setEmpDepartment(const std::string &empDepartment);

    const std::string &getEmpNames() const;
    void setEmpNames(const std::string &empNames);

    int getEmpId() const;
    void setEmpId(int empId);
};
#endif //GROUP_PROJECT_EMPLOYEE_PROFILE_H
