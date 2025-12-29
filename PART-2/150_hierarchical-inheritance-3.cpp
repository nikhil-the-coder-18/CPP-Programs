/* 150 : Write a C++ Program to Explain Heirarchical Inheritannce - 3.
   Date : 22/12/2025
   Author : Nikhil  */
 
#include<iostream>
using namespace std;
class Person {
    public:
        string name1 = "Bhavy", name2 = "Nirmesh";
        int age = 17;
};
class Student : public Person {
    public:
        int totmarks = 78;
        void marks () {
            cout << "Marks of " << name1 << " is: " << totmarks << endl;
        }
};
class Teacher : public Person {
    public:
        int totsalary = 51000;
        void Salary () {
            cout << "salary of " << name2 << " is: " << totsalary << endl;
        }
};

int main() {
    Student s1;
    Teacher t1;

    s1.marks();
    t1.Salary();

    return 0;
}