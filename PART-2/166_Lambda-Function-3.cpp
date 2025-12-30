/* 166 : Write a C++ Program to Explain Lambda Function using capture by value.
   Date : 30/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main () {
    string name = "Nikhil";

    auto Showname = [name]() {
        cout << "My Name is " << name << endl;
    };

    Showname();
}