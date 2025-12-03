/* 65 : Storage class example.
   Date : 06/11/2025
   Author : Nikhil  */

using namespace std;
#include<iostream>
int a=10; // extren (global)
int main () {
    int b=20; // auto (local)
    static int c=30; // static
    register int d=40; //Register
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    return 0;
}