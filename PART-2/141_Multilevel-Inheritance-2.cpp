/* 141 : Write a C++ Program to Explain Multilevel Inheritance 2.
   Date : 18/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Parent {
    public:
        void Show() {
            cout << "I am Parent Class " << endl;
        }
};
class child : public Parent {
    public:
        void Show2() {
            cout << "I am Child Class " << endl;
        }
};
class Grandchild : public child {
    public:
        void Show3() {
            cout << "I am Grandchild Class " << endl;
        }
};

int main () {
    Grandchild family;
    family.Show();
    family.Show2();
    family.Show3();
    return 0;
}