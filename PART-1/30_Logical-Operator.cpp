/* 30 : Logical Operator.
   Date : 23/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    cout << ((15 > 10) && (5 < 3)) << endl; // 0 False
    cout << ((10 > 5) || (10 < 7)) << endl; // 1 True
    cout << ! (20 < 50) << endl; // 0 False
    return 0;
}