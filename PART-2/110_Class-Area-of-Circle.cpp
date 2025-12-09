/* 110 : Write a C++ Program to Claculate Area of Circle Using Class And Objects.
   Date : 18/11/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
class AOC
{
private:
    float result;

public:
    void area(int r)
    {
        result = 3.14 * r * r;
        cout << "Your Area of Circle is = " << result << endl;
    }
};
int main()
{
    AOC circle;
    int r;
    cout << "Enter Circle Radius : ";
    cin >> r;
    circle.area(r);
    return 0;
}