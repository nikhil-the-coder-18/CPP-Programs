/* 41 : Goto and Return Statement.
   Date : 26/09/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
int main ()
{
    int age;
    cout << "Enter Your Age : ";
    cin >> age;
    if (age >= 18)
        goto vote;
    else
        goto notvote;

vote:
    cout << "Eligible For Vote !";
    return 0;

notvote:
    cout << "Not Eligible For Vote !";
    return 0;
}