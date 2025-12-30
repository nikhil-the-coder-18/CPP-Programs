/* 165 : Write a C++ Program to Explain Lambda Function Callback concept.
   Date : 30/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;

void execute(auto work) {
    work();
}

int main () {
    execute([]() {
        cout << "Work executed.." << endl;
    });
    return 0;
}