/* 117 : Write a C++ Program to Explain Parameterized Constructor.
   Date : 25/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class SUM {
    public: 
        SUM (int a, int b) {
            cout << "Addition = " << a + b;
        }
};
int main () {
    SUM number(18, 45);
    return 0;
}