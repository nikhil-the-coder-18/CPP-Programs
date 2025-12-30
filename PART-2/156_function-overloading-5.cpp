/* 156 : Write a C++ Program to Explain Function Overloading - 5 - Calculator.
   Date : 22/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Calculator {
   public :
      int add(int a, int b) {
         return a+b;
      }

      float add(float a, float b) {
         return a+b;
      }

      int add(int a, int b, int c) {
         return a+b+c;
      }
};

int main () {
   Calculator C;

   cout << "Adding 2 Integers: " << C.add(10, 20) << endl;
   cout << "Adding 2 Floats: " << C.add(5.2f, 6.7f) << endl;
   cout << "Adding 3 Integers: " << C.add(18, 45, 7) << endl;

   return 0;
}