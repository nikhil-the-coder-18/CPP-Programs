/* 35 : Loop Calculator.
   Date : 24/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int ch;
    double a,b;
    while (true) {
        cout << "\n\nINFINITE CALCULATOR !\n" << endl;
        cout << "========MENU========\n" << endl;
        cout << "1. For Addition\n";
        cout << "2. For Subtraction\n";
        cout << "3. For Multiplication\n";
        cout << "4. For Division\n";
        cout << "5. For Exit !!!\n";
        cout << "====================\n" << endl;
        cout << "Enter Your Choice : \n";
        cin >> ch;

        if (ch == 5)
        {
            cout << "Loop is Exiting... By BY.. Ta..ta...";
            break;
        }

        cout << "Enter Two Numbers : ";
        cin >> a >> b;

        switch (ch)
        {
            case 1 : cout << "You Addition is : " << a + b;
            break;
            case 2 : cout << "You Subtraction is : " << a - b;
            break;
            case 3 : cout << "You Multiplication is : " << a * b;
            break;
            case 4 : 
                    if (b != 0)
                    {
                        cout << "You Division is : " << a / b;
                    }
                    else {
                        cout << "No Number is Devided by 0";
                    }
                    break;
            default : cout << "Wrong choice....";
            continue;
        }

    }
    return 0;
}