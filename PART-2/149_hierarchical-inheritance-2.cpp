/* 149 : Write a C++ Program to Explain Heirarchical Inheritannce - 2.
   Date : 22/12/2025
   Author : Nikhil  */
 
#include<iostream>
using namespace std;
class Shape {
    public:
        int height = 20, width = 30;
        int r=34, pi = 3.14;
};
class Circle : public Shape {
    public:
        void carea () {
            cout << "Area of Circle is: " << 3.14*r*r << endl;
        }
};
class Rectangle : public Shape {
    public:
        void rarea () {
            cout << "Area of Rectangle is: " << height*width << endl;
        }
};

int main () {
    Circle c;
    Rectangle r;

    c.carea();
    r.rarea();

    return 0;
}