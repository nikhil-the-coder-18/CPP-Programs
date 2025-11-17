/* 85 : Conditional Macro Example.
   Date : 11/11/2025
   Author : Nikhil  */

#include<iostream>
#define LIGHT 1
using namespace std;
int main () {
    #if LIGHT 
        cout << "Light is On..." << endl;
    #else
        cout << "Light is Off..." << endl;
    #endif
    return 0;
}