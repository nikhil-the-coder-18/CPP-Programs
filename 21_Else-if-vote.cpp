/* 21 : If-Else Statement (Eligible for vote or not).
   Date : 19/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int age;
    cout << "Enter Your Age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are Eligible for Vote";
    }
    else {
        cout << "You are Not Eligible for vote";
    }
    return 0;
}