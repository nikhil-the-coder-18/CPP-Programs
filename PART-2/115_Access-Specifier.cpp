/* 115 : Write a C++ Program to Explain Access-Specifier.
   Date : 22/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class A {
    private :
        int A;
    protected :
        int B;
    public :
        int C;
};
int main () {
    A obj;
    // obj.A = 10;
    // obj.B = 20;
    obj.C = 30;
    // cout << obj.A << endl;
    // cout << obj.B << endl;
    cout << obj.C << endl;
    return 0;
}