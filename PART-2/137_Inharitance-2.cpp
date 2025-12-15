/* 136 : Write a C++ Program to Explain Inharitance - 2 .
   Date : 15/12/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
class Vehicle
{
public:
    string Brand = "Ford";
    void honk()
    {
        cout << "Tuut, tuut! " << endl;
    }
};
class Car : public Vehicle
{
public:
    string Model = "Mustang";
};
int main()
{
    Car mycar;
    mycar.honk();
    cout << mycar.Brand << " " << mycar.Model << endl;
    return 0;
}