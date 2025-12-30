/* 160 : Write a C++ Program to Explain Function Overriding - 4.
   Date : 27/12/2025
   Author : Nikhil  */
 
#include<iostream>
using namespace std;
class Shape {
    public:
        void Draw() {
            cout << "Drawing Shape" << endl;
        }
};
class Circle : public Shape {
    public:
        void Draw() {
            cout << "Drawing Circle" << endl;
        }
};

int main () {
    Circle d;
    d.Draw();
    return 0;
}