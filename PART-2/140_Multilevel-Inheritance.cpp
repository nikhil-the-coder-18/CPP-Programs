/* 140 : Write a C++ Program to Explain Multilevel Inheritance .
   Date : 18/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class A {
    protected :
        int a,b;
    public :
        void input() {
            cout << "Enter Two Numbers: ";
            cin >> a >> b;
        }
};
class B : public A {
    public :
        void add() {
            cout << "Addition: " << a + b << endl;
        }
        void sub() {
            cout << "Substraction: " << a - b << endl;
        }
};
class C : public B {
    public :
        void mult() {
            cout << "Multiplication: " << a * b << endl;
        }
        void div() {
            cout << "Division: " << a / b << endl;
        }
};

int main () {
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.mult();
    obj.div();
    return 0;
}