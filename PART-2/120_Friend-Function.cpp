/* 120 : Write a C++ Program to Explain Friend Function.
   Date : 02/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Employee {
    private :
        int salary;
    public:
        void Empolyee(int s) {
            salary = s;
        }
        friend void DisplaySalary (Employee emp);
};
int main () {
    Employee MyEmp(50000);
    DisplaySalary(MyEmp);

}

void DisplaySalary(Employee emp)
{
    cout << "Salary : " << emp.salary << endl;

}
