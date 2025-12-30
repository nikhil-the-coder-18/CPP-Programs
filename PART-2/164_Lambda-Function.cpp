/* 164 : Write a C++ Program to Explain Lambda Function (Printing Hello Only).
   Date : 30/12/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
int main()
{
    auto hello = []()
    {
        cout << "Hello" << endl;
    };

    hello();

    return 0;
}