/* 121 : Write a C++ Program to Explain Destructor - 2.
   Date : 05/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Constr {
    public:
    Constr() {
        cout << "Called By Constructor" << endl;
    }
    ~Constr() {
        cout << "Called By Destructor";
    }
};
int main () {
    Constr A;
    return 0;
}