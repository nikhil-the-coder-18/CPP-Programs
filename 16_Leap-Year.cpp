/* 16 : If-Else Statement (Leap Year).
   Date : 17/09/2025
   Author : Nikhil  */


#include<iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter The Year : ";
    cin >> year;
    if(year % 4 == 0)
    {
        cout << "This Year is Leap Year" << endl;
    }
    else
    {
        cout << "This Year is Not Leap Year" << endl;
    }
    return 0;
}