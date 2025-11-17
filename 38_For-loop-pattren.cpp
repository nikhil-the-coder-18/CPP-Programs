/* 38 : For Loop Pattren.
   Date : 24/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    for (int i = 1 ; i <= 5 ; i++)
    {
        for (int j=1 ; j <= i ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
