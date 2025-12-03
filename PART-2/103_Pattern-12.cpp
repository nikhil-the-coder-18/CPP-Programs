/* 103 : C++ Loop Pattern 12.
   Date : 14/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main () {
    int n=5;
    for(int i=1; i<=n; i++) {
        cout << "*";
        for (int j=2; j<i; j++) {
            cout << " ";
        }
        if (i>1) {
            cout << "*";
        }
        for (int j = i+1; j<n; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    return 0;
}
