//
// Created by Chris fox on 4/24/24.
//

#ifndef GROUP_PROJECT_EMPLOYEE_PROFILE_H
#define GROUP_PROJECT_EMPLOYEE_PROFILE_H
#include <iostream>

class Employee_profile {
private:

    std::string emp_Department;
    std::string emp_Names;
    int emp_Id;

public:

    const std::string &getEmpDepartment() const;
    void setEmpDepartment(const std::string &empDepartment);

    const std::string &getEmpNames() const;
    void setEmpNames(const std::string &empNames);

    int getEmpId() const;
    void setEmpId(int empId);
};
#endif //GROUP_PROJECT_EMPLOYEE_PROFILE_H
