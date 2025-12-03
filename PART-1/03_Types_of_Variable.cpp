/* 03 : Types of Variables.
   Date : 10/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int a = 10;           // Globle Variable
static int b = 20;      // Static Variable
int main ()
{
    int c = 30;     // local variable
    static int d = 40;     //Static Variable
    cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<endl;
    return 0;
}