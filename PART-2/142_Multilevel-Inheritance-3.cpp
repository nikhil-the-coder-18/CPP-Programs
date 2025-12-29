/* 142 : Write a C++ Program to Explain Multilevel Inheritance 3.
   Date : 18/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Base {
    public :
        void base() {
            cout << "Base class content." << endl;
        }
};
class Second : public Base {
};
class Third : public Second {
};

int main () {
    Third obj;
    obj.base();
    return 0;
}