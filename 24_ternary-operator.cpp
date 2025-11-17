/* 24 : Ternary Operator Example.
   Date : 20/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int a, b;
    cout << "Enter Two Number : ";
    cin >> a >> b;
    (a > b) ? cout << "big Number : " << a : cout << "big Number : " << b;
    return 0;
}