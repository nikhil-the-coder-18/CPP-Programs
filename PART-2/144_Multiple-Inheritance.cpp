/* 144 : Write a C++ Program to Explain Multiple Inheritance.
   Date : 18/12/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
int a, b, c;
class A
{
public:
    void input();
    void add();
};

void A ::input()
{
    cout << "Enter Two Numbers: ";
    cin >> a >> b;
}

void A ::add()
{
    cout << "Addition: " << a + b << endl;
}

class B
{
public:
    void sub();
};

void B ::sub()
{
    cout << "Substraction: " << a - b << endl;
}

class C : public A, public B
{
public:
    void mult();
    void div();
};

void C ::mult()
{
    cout << "Multiplication: " << a * b << endl;
}

void C :: div()
{
    cout << "Division: " << a / b << endl;
}

int main()
{
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.mult();
    obj.div();
    return 0;
}
