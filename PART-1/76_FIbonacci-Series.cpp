/* 76 : Fibonacci Series.
   Date : 08/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main () {
    int no1=0, no2=1, no3, no;
    cout << "Enter The Number To Print the Finbonacci Series : ";
    cin >> no;
    cout << "Your Number's Fibonacci Series is : " << no1 << " " << no2 << " ";
    for(int i=2; i<no; ++i) {
        no3 = no1 + no2;
        cout << no3 << " ";
        no1 = no2;
        no2 = no3;
    }
    return 0;
}