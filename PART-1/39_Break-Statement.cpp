/* 39 : Break Statement.
   Date : 26/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    for(int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;      // This Break Statement will stop to loop.
        }
        cout << i << endl;
    }
    return 0;
}