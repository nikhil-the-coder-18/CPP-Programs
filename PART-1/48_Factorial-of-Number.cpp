/* 48 : Find Factorial Of Given Number.
   Date : 03/10/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int i,no,fact = 1;
    cout << endl << "Factorial Finder" << endl;
    cout << "Enter The Number : ";
    cin >> no;
    if(no < 0)
    {
        cout << "Negative Numbers Don't have factorial";
    }
    else {
        for(i=1; i<=no; i++)
        {
            fact = fact*i;
        }
    }
    cout << "\nYour Number's Factorial is = " << fact << endl;
    return 0;
}