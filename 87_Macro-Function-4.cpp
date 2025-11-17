/* 87 : Macro Function Example 4.
   Date : 11/11/2025
   Author : Nikhil  */

#include<iostream>
#define TEMP(x) ((x-32) * 5/9)
using namespace std;
int main () {
    float f;
    cout << "TEMPERATURE CONVERTER !" << endl;
    cout << "Enter Your Temp. in Fahrenheit : ";
    cin >> f;
    cout << "Your Temperatur in Celsius is = " << TEMP(f) << "C" << endl;
    return 0; 
}