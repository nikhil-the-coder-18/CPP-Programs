/* 58 : String - strcat() Function.
   Date : 04/11/2025
   Author : Nikhil  */

#include<iostream>
#include<string.h>
using namespace std;
int main () {
    char name[] = "Nikhil ";
    char surname[50];
    cout << "Enter Your Surname : ";
    cin >> surname;
    strcat(name, surname);
    cout << "Your Full Name is :  " << name << endl;
    return 0;
}