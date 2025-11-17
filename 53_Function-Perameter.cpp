/* 53 : Function Perameter Example.
   Date : 17/10/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;

int sum(int a, int b) {
    int c = a+b;
    return c;
}

int main () 
{
    int a1,b1;
    cout << "Enter Two Numbers : ";
    cin >> a1 >> b1;
    int result = sum(a1, b1);
    cout << result << endl;
    return 0;
}