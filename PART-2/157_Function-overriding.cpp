/* 157 : Write a C++ Program to Explain Function Overriding.
   Date : 27/12/2025
   Author : Nikhil  */
 
#include<iostream>
using namespace std;
class A {
    public:
        void person() {
            cout << "Good Morning..." << endl;
        }
};
class B: public A {
    public:
        void person() {
            cout << "Good Night..." << endl;
        }
};

int main () {
    B obj;
    obj.person();
    obj.A::person();

    return 0;
}