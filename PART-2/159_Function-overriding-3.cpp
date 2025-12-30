/* 159 : Write a C++ Program to Explain Function Overriding - 3.
   Date : 27/12/2025
   Author : Nikhil  */
 
#include<iostream>
using namespace std;
class Animal {
    public:
        void sound() {
            cout << "Animal makes sound" << endl;
        }
};
class Dog : public Animal {
    public:
        void sound() {
            cout << "Dog Barks" << endl;
        }
};

int main () {
    Dog d;
    d.sound();
    return 0;
}