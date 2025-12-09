/* 108 : Write a C++ Program to Create Calculator Using Class And Objects.
   Date : 17/11/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
class Calculator
{
public:
    void Arithmetic(int n1, int n2, int ch)
    {
        if (ch == 1)
        {
            cout << "Your Result is = " << n1 + n2 << endl;
        }
        else if (ch == 2)
        {
            cout << "Your Result is = " << n1 - n2 << endl;
        }
        else if (ch == 3)
        {
            cout << "Your Result is = " << n1 * n2 << endl;
        }
        else if (ch == 4)
        {
            cout << "Your Result is = " << n1 / n2 << endl;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
};
int main()
{
    Calculator no;
    int no1, no2, ch, restart;
    cout << "\n\nCALCULATOR !!!\n"
         << endl;
    cout << "Enter First Number : ";
    cin >> no1;
    cout << "Enter Second Number : ";
    cin >> no2;
    cout << "\nWrite 1 For Addition, 2 For Subtraction, 3 For Multiplication and 4. : " << endl;
    cout << "Enter Your Choice : ";
    cin >> ch;

    no.Arithmetic(no1, no2, ch);
    return 0;
}