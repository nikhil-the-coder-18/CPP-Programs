/* 45 : Curruncy Converter in C++.
   Date : 29/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int inr,usd,ch,restart;

    restart : 
    cout << "\n Currenecy Convereter !" << endl << endl;
    cout << "Which One Do you Want ? " << endl;
    cout << "Select 1 For INR To USD\nSelect 2 For USD To INR" << endl; 
    cout << "\nSelect Your Choice : ";
    cin >> ch;
    switch (ch) {
        case 1 : cout << "Enter Your Indian Rupees : ";
                cin >> inr;
                cout << "\nYour Converted INR Into USD is = " << inr/83 << endl << endl;
        case 2 : cout << "Enter Your US Dollar : ";
                cin >> usd;
                cout << "\nYour Converted USD Into INR is = " << usd*83 << endl << endl;
        default : cout << "Invalid Choice !" << endl << endl;
    }
    goto restart;
    return 0;
}