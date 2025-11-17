/* 104 : Write a C++ Program to check the given number is palidrome or not.
   Date : 15/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main () {
    int n, num, digit, rev = 0;
    cout << "Enter Any Number : ";
    cin >> num;
    n = num;

    do {
        digit = num%10;
        rev = (rev*10) + digit;
        num = num/10;
    } while(!num==0);

    if(n == rev && n > 0) {
        cout << n << " is Palindrome Number" << endl;
    } else {
        cout << n << " is Not a Palindrome Number" << endl;
    }
    return 0;
}