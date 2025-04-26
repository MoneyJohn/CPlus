#include<iostream>
#include<string>

class Employee{
    private:
    std::string name;
    int employee_id;
    std::string department;
    std::string job_title;

    public:
    Employee(std::string n, int id, std::string dept, std::string title){
        name = n;
        employee_id = id;
        department = dept;
        job_title = title;
    }
};

int main(){
    Employee emp_1("Susan Meyers ", 47899, " accounting", " Vice President");
    Employee emp_2("Mark Jones ", 39119, " IT", " Programmer");
    Employee emp_3("Joy Rogers ", 81774, "Manufacturing", "Engineer");
}

