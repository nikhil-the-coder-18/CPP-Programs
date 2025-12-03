/* 86 : Macro Function Example 3.
   Date : 11/11/2025
   Author : Nikhil  */

#include<iostream>
#define SI(a, b, c) ((a*b*c)/100)
using namespace std;
int main () {
    int t,r,p;
    cout << "SIMPLE INTEREST CALCULATOR ! " << endl;
    cout << "Enter Your Principle Amount : ";
    cin >> p;
    cout << "Enter Your Time in Years : ";
    cin >> t;
    cout << "Enter Your Rate of Interest : ";
    cin >> r;

    cout << "Your Simple Interest is : " << SI(p, t, r) << endl;
    return 0;
}