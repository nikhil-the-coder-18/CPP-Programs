/* 59 : String - strcpy() Function.
   Date : 04/11/2025
   Author : Nikhil  */

#include<iostream>
#include<string.h>
using namespace std;
int main () {
    char name[50];
    char name2[50];
    cout << "Enter Your name : ";
    cin >> name2;
    strcpy(name, name2);
    cout << "Your Name is :  " << name << endl;
    return 0;
}