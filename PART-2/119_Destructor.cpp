/* 119 : Write a C++ Program to Explain Destructor.
   Date : 27/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int count = 0;
class A {
    public :
        A() {
            cout << "Object " << ++count << " Created..." << endl;
        }
        ~A() {
            cout << "Object " << count-- << " Deleted..." << endl;
        }
};
int main () {
    A obj,obj1,obj2;
    return 0;
}