/* 125 : Write a C++ Program to Explain Friend Class.
   Date : 08/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class A {
    private :
        int a, b;
    public :
        void input() {
            a = 18;
            b = 45;
        }
    friend class B;
};

class B {
    public :
        void Add(A Sum) {
            cout << "Addition = " << Sum.a + Sum.b << endl;
        } 
};

int main () {
    A obj1;
    obj1.input();
    
    B obj2;
    obj2.Add(obj1);

    return 0;
}
