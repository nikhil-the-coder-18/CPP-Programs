/* 148 : Write a C++ Program to Explain Heirarchical Inheritannce.
   Date : 20/12/2025
   Author : Nikhil  */
 
#include<iostream>
using namespace std;
class Animal {
    public :
        void eat() {
            cout << "I am Eating....";
        }
};

class Cat : public Animal {
    public :
        void voice () {
            cout << "Meau...Meau..." << endl;
        }
};

class Dog : public Animal {
    public :
        void bark () {
            cout << "Bhau...Bhau..." << endl;
        }
};

int main() {
    Cat c;
    Dog d;

    c.eat(); c.voice();
    d.eat(); d.bark();

    return 0;
}