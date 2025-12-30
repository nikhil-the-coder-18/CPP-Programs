/* 162 : Write a C++ Program to Explain Function Overriding - 6.
   Date : 27/12/2025
   Author : Nikhil  */
 
#include<iostream>
using namespace std;
class Student {
    public :
        void Info() {
            cout << "School Student" << endl;
        }
};
class CollegeStudent : public Student {
    public :
        void Info() {
            cout << "College Student" << endl;
        }
};

int main () {
    CollegeStudent S;
    S.Info();
    return 0;
}