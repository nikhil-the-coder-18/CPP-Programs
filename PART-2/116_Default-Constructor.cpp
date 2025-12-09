/* 116 : Write a C++ Program to Explain Default Constructor.
   Date : 22/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class A {
    int a, b;
    public :
        A() {
            a = 10; b = 20;
            cout << a << " " << b << endl;
        }
};
int main () {
    A obj;
    return 0;
}