/* 84 : Macro Function Example 2.
   Date : 11/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
#define Square(x) ((x) * (x))
int main () {
    int no;
    cout << "Enter any Number : ";
    cin >> no;
    cout << "Your Number's Square is = " << Square(no) << endl;
    return 0;
}