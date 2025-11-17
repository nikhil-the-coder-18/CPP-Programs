/* 75 : Union Example 2 (Currency Converter).
   Date : 08/11/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
union currency
{
    float rupees;
    float dollar;
};
int main()
{
    union currency c;
    int curr;
    int no;
    cout << "CURRENCY CONVERTER !! " << endl
         << endl;
    cout << "Type 1 for Rupees To Dollar" << endl;
    cout << "Type 2 for Dollar To Rupees" << endl;
    cin >> no;

    if (no == 1)
    {
        cout << "Enter Your Rupees : ";
        cin >> c.rupees;
        cout << "Your Dollar is = " << c.rupees / 84 << "$";
    }
    else if (no == 2)
    {
        cout << "Enter Your Dollar : ";
        cin >> c.dollar;
        cout << "Your Rupees is = " << c.dollar * 84 << "₹";
    }
    else
    {
        cout << "Invalid Choice..." << endl;
    }
    return 0;
}