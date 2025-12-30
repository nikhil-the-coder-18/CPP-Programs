/* 154 : Write a C++ Program to Explain Function Overloading - 3 ( Different Inputs) .
   Date : 22/12/2025
   Author : Nikhil  */

#include<iostream>
#include<string>
using namespace std;
class A {
    public:
        void print(int a) {
            cout << "Integer Value: " << a << endl;
        }
        void print(float a) {
            cout << "Float Value: " << a << endl;
        }
        void print(string a) {
            cout << "String Value: " << a << endl;
        }
};

int main () {
    A obj;
    obj.print(18);
    obj.print(4.5f);
    obj.print("Nikhil");

    return 0;
}