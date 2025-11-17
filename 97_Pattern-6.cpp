/* 97 : C++ Loop Pattern 6.
   Date : 14/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main () {
    for(int i=5; i>=1; i--) {
        for(int k=5-i; k>0; k--) {
            cout << " ";
        }
        for(int j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}