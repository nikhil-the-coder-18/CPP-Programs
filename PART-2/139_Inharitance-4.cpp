/* 139 : Write a C++ Program to Explain Inharitance - 4 .
   Date : 17/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Shape {
    public :
        int width = 45;
        int height = 18;
};
class Rectangle : public Shape {
    public :
        void Area() {
            cout << "Area = " << width * height << endl;
        }
};
int main () {
    Rectangle r;
    r.Area();
    return 0;
}