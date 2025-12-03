/* 28 : Switch Case - Subjects.
   Date : 20/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int sub;
    cout << "Enter Your Choice : ";
    cin >> sub;
        switch(sub)
    {
        case 1 : cout << "Gujarati";
        break;
        case 2 : cout << "Maths";
        break;
        case 3 : cout << "Social Science";
        break;
        case 4 : cout << "Science";
        break;
        case 5 : cout << "Sanskrit";
        break;
        case 6 : cout << "English";
        break;
        default : "invalid choice";
    }
    return 0;
}