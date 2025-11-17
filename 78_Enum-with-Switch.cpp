/* 78 : Enum Example With Switch case statement.
   Date : 10/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
enum Level {
    LOW = 1,
    MEDIUM,
    HIGH
};

int main () {
   enum Level var = MEDIUM;
   switch (var)
   {
   case 1 :
      cout << "This is Low";
      break;
   case 2 :
      cout << "this is Medium";
      break;
   case 3 :
      cout << "This is Hard";
      break;
   default:
      cout << "Nothing";
      break;
   }
}