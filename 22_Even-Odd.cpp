/* 22 : If-Else Statement (Even Odd Number Checker).
   Date : 19/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int no;
    cout << "Enter the Number : ";
    cin >> no;
    if (no % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
    return 0;
}