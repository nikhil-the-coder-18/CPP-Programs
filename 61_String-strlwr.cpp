/* 60 : String - strlwr() Function.
   Date : 04/11/2025
   Author : Nikhil  */

#include<iostream>
#include<string.h>
using namespace std;
int main () {
    char name[50];
    cout << "Enter Your Name : ";
    cin >> name;
    strlwr(name);
    cout << "Your Name is Lowercase is " << name << endl;
    return 0;
}