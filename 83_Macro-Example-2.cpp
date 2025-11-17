/* 83 : Macro Example 2.
   Date : 11/11/2025
   Author : Nikhil  */

#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
   int r;
   cout << "Find Area Of Circle!\n Enter Radius : ";
   cin >> r;
   cout << "Area of Circle : " << PI * r * r;
   return 0;
}