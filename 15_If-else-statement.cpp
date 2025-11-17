/* 15 : If-Else Statement (Big Number).
   Date : 17/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int a, b;
    cout << "Enter two Numbers : ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "Big Number is = " << a << endl;
    }
    else
    {
        cout << "Big Number is = " << b << endl;
    }
    return 0;
}