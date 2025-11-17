/* 44 : Goto Statement Example 2.
   Date : 27/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int no1, no2;
    cout << "Enter The Number 1 = ";
    cin >> no1;
    cout << "Enter The Number 2 = ";
    cin >> no2;

    if (no1 == no2)
    goto equal;
    else
    goto notequal;

    equal : cout << "The Number is Equal" << endl;
    return 0;

    notequal : cout << "The Number is Not Equal" << endl;
    return 0;
}