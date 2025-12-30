/* 161 : Write a C++ Program to Explain Function Overriding - 5.
   Date : 27/12/2025
   Author : Nikhil  */
 
#include<iostream>
using namespace std;
class A {
    public:
        void display() {
            cout << "Class A Display" << endl;
        }
};

class B : public A {
    public:
    void display() {
        A::display(); // Parent function call
        cout << "Class B Display" << endl;
    }
};

int main () {
    B b;
    b.display();
    return 0;
}