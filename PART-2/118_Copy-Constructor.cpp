/* 118 : Write a C++ Program to Explain Copy Constructor.
   Date : 27/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class A {
    private :
        int x,y;
    public : 
        A(int a, int b) {
            x=a;
            y=b;
        }
        A(A &ref) {
            x = ref.x;
            y = ref.y;
            cout << x << " " << y << endl;
        }
};
int main () {
    A obj(18, 45);
    A obj2 = obj;
    return 0;
}