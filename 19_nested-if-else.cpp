/* 19 : Nested If-Else Statement (Max Number).
   Date : 19/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int a, b, c;
    cout << "Enter three Numbers : ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "Big Number is A = " << a;
        }
        else {
            cout << "Big Number is C = " << c;
        }
    }
    else {
        if (b > c)
        {
            cout << "Big Number is B = " << b;
        }
        else {
            cout << "Big Number is C = " << c;
        }
    }
    return 0;
}