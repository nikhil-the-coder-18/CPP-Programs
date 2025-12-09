/* 106 : Write a C++ Program to Show use of class and objects Example 2.
   Date : 17/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Person {
   private :
   int runs;
   float water;
   string name;

   public :
   void Cricket () {
      runs = 50;
      cout << "I Scored " << runs << " runs today." << endl;
   }
   void Drink () {
      water = 3.5;
      cout << "I Drinked " << water << "ml water today." << endl;
   }
   void Info() {
      name = "My Name is Nikhil...";
      cout << name << endl;
   }
};

int main () {
   Person N;
   N.Info();
   N.Cricket();
   N.Drink();
   return 0;
}