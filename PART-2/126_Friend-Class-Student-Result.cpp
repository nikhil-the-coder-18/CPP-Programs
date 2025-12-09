/* 126 : Write a C++ Program to Explain Friend Class -- Student Result System.
   Date : 08/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Student {
    private :
        string name;
        int marks;
    public :
        Student(string n, int m) {
            name = n;
            marks = m;
        }
        friend class Result;
};

class Result{
    public :
        Result (Student ref) {
            cout << "Name : " << ref.name << endl;
            if (ref.marks >= 90) {
                cout << "Grade : A+" << endl;
            } else if (ref.marks >= 80 && ref.marks <= 89) {
                cout << "Grade : A" << endl;
            } else if (ref.marks >= 70 && ref.marks <= 79) {
                cout << "Grade : B+" << endl;
            } else if (ref.marks >= 60 && ref.marks <= 69) {
                cout << "Grade : B" << endl;
            } else if (ref.marks >= 50 && ref.marks <= 59) {
                cout << "Grade : C+" << endl;
            } else if (ref.marks >= 40 && ref.marks <= 49) {
                cout << "Grade : C" << endl;
            } else {
                cout << "You are Fail" << endl;
            }
        }
};

int main () {
    Student s1("Bhavy", 61);
    Result R(s1);
    return 0;
}