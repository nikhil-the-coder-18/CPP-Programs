/* 69 : Storage class Register Variable.
   Date : 06/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main () {
    register int counter;
    for (counter = 1; counter <=10; counter++) {
        cout << counter << endl;
    }
    return 0;
}