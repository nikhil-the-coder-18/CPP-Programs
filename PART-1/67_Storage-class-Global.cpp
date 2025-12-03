/* 67 : Storage class Global Variable.
   Date : 06/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
void test();

int a = 18; // global variable

int main () {
    a++;
    cout << a << endl; //outputs - 19
    test();
    return 0;
}
void test() {
    a++;
    cout << a << endl; // outputs - 20
}