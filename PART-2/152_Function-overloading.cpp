/* 152 : Write a C++ Program to Explain Function Overloading.
   Date : 22/12/2025
   Author : Nikhil  */
 
#include<iostream>
using namespace std;
class A {
    private:
        int mult, div;
    public:
        void calculate() {
            int x, y;
            cout << "Enter Two Numbers: ";
            cin >> x >> y;

            cout << "Sum of " << x << " and " << y << " is: " << x+y << endl;
            cout << "Subtraction of " << x << " and " << y << " is: " << x-y << endl;
        }

        void calculate(int a, int b) {
            mult=a*b;
            div=a/b;
            cout << "Multiplication of " << a << " and " << b << " is: " << mult << endl;
            cout << "Division of " << a << " and " << b << " is: " << div << endl;
        }
};
int main () {
    A obj;

    obj.calculate();
    obj.calculate(20, 10);

    return 0;
}