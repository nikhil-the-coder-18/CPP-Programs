/* 145 : Write a C++ Program to Explain Multiple Inheritance - 2.
   Date : 18/12/2025
   Author : Nikhil  */
   
#include<iostream>
using namespace std;
class Parent {
    public:
        void Show() {
            cout << "I am Parent Class " << endl;
        }
};
class child {
    public:
        void Show2() {
            cout << "I am Child Class " << endl;
        }
};
class Grandchild {
    public:
        void Show3() {
            cout << "I am Grandchild Class " << endl;
        }
};
class Other : public Parent, public child, public Grandchild {
    public:
        void Show4() {
            cout << "I am other someone " << endl;
        }
};

int main () {
    Other family;
    family.Show();
    family.Show2();
    family.Show3();
    family.Show4();
    return 0;
}