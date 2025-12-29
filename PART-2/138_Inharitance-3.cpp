/* 138 : Write a C++ Program to Explain Inharitance - 3 .
   Date : 17/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Animal {
    public : 
        void eat() {
            cout << "I can Eat!" << endl;
        }
        void sleep() {
            cout << "I can sleep" << endl;
        }
};

class Dog : public Animal {
    public :
        void bark () {
            cout << "I can bark!" << endl;
        }
};

int main ()  {
    Dog Dog1;
    Dog1.eat();
    Dog1.sleep();
    Dog1.bark();
    return 0;
}