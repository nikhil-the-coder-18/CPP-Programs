/* 124 : Write a C++ Program to Explain Friend Function 2 -- Find Topper.
   Date : 08/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Student {
    private :
        int marks;
        string name;
    public :
        Student(string n, int m) {
            name = n;
            marks = m;
        }

        friend void FindTopper (Student s1, Student s2);
};

void FindTopper (Student s1, Student s2) {
    if(s1.marks > s2.marks) {
        cout << "Student " << s1.name << " is Topper with marks " << s1.marks << endl;
    } else if(s2.marks > s1.marks) {
        cout << "Student " << s2.name << " is Topper with marks " << s2.marks << endl;
    } else {
        cout << "Both Students scored equal..." << endl;
    }
}

int main () {
    Student s1 ("Nikhil", 89);
    Student s2 ("Zeeshan", 78);

    FindTopper(s1, s2);
    return 0;
}