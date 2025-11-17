/* 46 : Student marks Enter system in C++ Using 1D Array and For Loop.
   Date : 30/09/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
int main()
{
    int i, a[15]; // you can store marks of upto 15 students.
    string name[15];

    for (i = 1; i <= 5; i++) // This Loop will add marks of 5 students with name.
    {
        cout << "\nEnter Name Of Student " << i << " : ";
        cin >> name[i];
        cout << "Enter Marks Of Student " << i << " : ";
        cin >> a[i];
    }

    cout << endl;

    for (i = 1; i <= 5; i++) // This loop will print it.
    {
        cout << "Student " << i << " Name = " << name[i] << endl;
        cout << "Student " << i << " Marks = " << a[i] << endl;
        cout << endl;
    }
    return 0;
}