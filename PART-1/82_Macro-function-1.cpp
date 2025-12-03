/* 82 : Macro Function Example 1.
   Date : 11/11/2025
   Author : Nikhil  */

#include<iostream>
#define num(a, b) ((a>b) ? a :b)
using namespace std;
int main () {
    int no1,no2;
    cout << "Enter Number 1 : ";
    cin >> no1;
    cout << "Enter Number 2 : ";
    cin >> no2;
    cout << "Big Number is : " << num(no1, no2) << endl;
    return 0;
}