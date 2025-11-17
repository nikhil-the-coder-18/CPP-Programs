/* 71 : Union Example 1.
   Date : 07/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
union result {
    char name[20];
    int c_marks;
    int java_marks;
    int python_marks;
};
int main () {
    union result a;
    cout << "Enter Student Name : ";
    cin >> a.name;
    cout << "Enter C Marks : ";
    cin >> a.c_marks;
    cout << "Enter Java Marks : ";
    cin >> a.java_marks;
    cout << "Enter Python Marks : ";
    cin >> a.python_marks;

    int total = a.c_marks + a.java_marks + a.python_marks;

    cout << "\nStudent Name : " << a.name << endl;
    cout << "Student Total Marks : " << total << endl;
    cout << "Percentage : " << (total/3) << "%" << endl;
    return 0;
}