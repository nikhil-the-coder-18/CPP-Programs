/* 112 : Write a C++ Program to Show use of class and objects With Car Details.
   Date : 19/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Car {
    private :
    string name;
    int speed;
    int year;
    public : 
    void CarInfo(string name, int speed, int year)  {
        cout << "\nCar Details : " << endl;
        cout << "------------------------" << endl;
        cout << "Car Name : " << name << endl;
        cout << "Car Top Speed : " << speed << "Kph" << endl;
        cout << "Car Launched Year : " << year << endl;
    }
};
int main () {
    Car Lamborgini, BMW, Mustang;
    int speed,year;
    string name;
    Lamborgini.CarInfo("Lamborgini Urus", 280, 2014);
    BMW.CarInfo("BMW I8", 300, 2019);
    Mustang.CarInfo("Mustang GT", 350, 2017);
    return 0;
}