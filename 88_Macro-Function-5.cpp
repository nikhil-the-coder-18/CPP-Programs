/* 88 : Macro Function Example 5.
   Date : 12/11/2025
   Author : Nikhil  */

#include<iostream>
#define FACT(x, y)(x * y)
using namespace std;
int main () {
    int no, result=1;
    cout << "Enter Any Number To find Factorial : ";
    cin >> no;
    for(int i=1; i<=no; i++) {
        result = FACT(result, i);
    }

    cout << "Your Factorial is = " << result << endl;
    return 0;
}