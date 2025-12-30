/* 167 : Write a C++ Program to Explain Lambda Function using capture by Reference.
   Date : 30/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main () {
    bool light = true;

    if(!light) { cout << "Light is Off" << endl; }
    else { cout << "Light is On" << endl; }

    auto offlight = [&light] () {
        light = false;
    };

    offlight();

    if(!light) { cout << "Light is Off"; }
    return 0;
}