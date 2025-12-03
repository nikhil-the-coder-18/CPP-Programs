/* 101 : C++ Loop Pattern 10.
   Date : 14/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main () {
    int n=1;
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            cout << " " << n++;
        }
        cout << endl;
    }
    return 0;
}