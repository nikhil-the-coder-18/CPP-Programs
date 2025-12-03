/* 81 : Macro Example 1.
   Date : 11/11/2025
   Author : Nikhil  */

#include<iostream>
#define n 10
using namespace std;
int main () {
    int i,r;
    for(i=1; i<=10; i++) {
        r = n*i;
        cout << n << " * " << i << " = " << r << endl;
    }
    return 0;
}