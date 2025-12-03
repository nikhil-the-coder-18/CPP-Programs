/* 18 : If-Else Statement (Arithmetic).
   Date : 19/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int a, b, choice, add, sub, mult, div;
    cout << "Enter Two Numbers : ";
    cin >> a >> b;
    cout << "Enter 1 for Add, 2 for subtract, 3 for multiply, 4 for Devide" << endl;
    cout << "Enter Your Choice : ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Your Addition is = " << a + b << endl;
    }
    else if (choice == 2) {
        cout << "Your Subtraction is = " << a - b << endl;
    }
    else if (choice == 3) {
        cout << "Your Multiplication is = " << a * b << endl;
    }
    else if (choice == 4) {
        cout << "Your Division is = " << a / b << endl;
    }
    else {
        cout << "Invalid Choice" <<endl;
    }
    return 0;
}
