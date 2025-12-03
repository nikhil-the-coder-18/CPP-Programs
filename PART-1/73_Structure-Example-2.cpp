/* 71 : Structure Example 2.
   Date : 07/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;

struct employee {
   int id;
   float salary;
   char name[50];
};

int main() {
   struct employee e;

   cout << "Enter Employee ID : ";
   cin >> e.id;

   cout << "Enter Employee Name : ";
   cin >> e.name;

   cout << "Enter Employee Salary : ";
   cin >> e.salary;

   cout << "\nEmployee ID = " << e.id << endl;
   cout << "Employee Name = " << e.name << endl;
   cout << "Employee Salary = " << e.salary << endl;

   return 0;
}