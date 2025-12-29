/* 143 : Write a C++ Program to Explain Multilevel Inheritance 4 - Digital Device Power System.
   Date : 18/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Device {
   public:
      string Brand;
      void input() {
         cout << "Enter Device Brand: ";
         cin >> Brand;
      }
};
class Mobile : public Device {
   public:
      int battery = 100;
      void BatteryCapacity() {
         cout << "Battery Capacity: " << battery << "%" << endl;
      }
};
class Smartphone : public Mobile {
   public:
      int batteryUsed = 60;
      void remainingBattery() {
         cout << "Remaining Battery: " << battery-batteryUsed << "%" << endl;
      }
};

int main () {
   Smartphone Samsung;
   Samsung.input();
   Samsung.BatteryCapacity();
   Samsung.remainingBattery();
   return 0;
}
