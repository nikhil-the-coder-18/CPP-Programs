/* 14 : If Statement.
   Date : 17/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int pass;
    cout << "Enter Your Atm Pin : ";
    cin >> pass;
    if (pass == 1806)
    {
        cout << "Your Balance is 1000$" << endl;
    }
    return 0;
}