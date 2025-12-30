/* 158 : Write a C++ Program to Explain Function Overriding - 2.
   Date : 27/12/2025
   Author : Nikhil  */
 
#include<iostream>
using namespace std;
class Parent {
    public:
        void show() {
            cout << "Parent Class Show Function..." << endl;
        }
};
class Child : public Parent {
    public:
        void show() {
            cout << "Child Class Show Function..." << endl;
        }
};

int main () {
    Child C;
    C.show();
    return 0;
}