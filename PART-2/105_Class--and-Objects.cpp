/* 104 : Write a C++ Program to Show use of class and objects.
   Date : 17/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Print {
    public : 
    void show () {
        cout << "Welcome to classes and Objects..." << endl;
    }
};
int main () {
    Print obj;
    obj.show();
    return 0;
}