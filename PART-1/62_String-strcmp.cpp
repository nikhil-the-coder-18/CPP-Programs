/* 62 : String - strcmp() Function.
   Date : 04/11/2025
   Author : Nikhil  */

#include<iostream>
#include<string.h>
using namespace std;
int main () {
    char name[50] = "Nikhil";
    char name2[50] = "Nikhil";
    int result = strcmp(name, name2); //returns 0 if both are same, otherwise returns 1.
    if (result == 0)
    {
            cout << "Both Strings are Same" << endl;
    }
    else {
            cout << "Both Strings are Not Same" << endl;
    }
        return 0;
}