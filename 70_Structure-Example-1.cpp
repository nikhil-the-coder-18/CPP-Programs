/* 70 : Structure Example 1.
   Date : 07/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
struct student {
   int roll;
   float marks;
   char name[50];
};

int main () {
   struct student n;
   cout << "Enter Student Roll No : ";
   cin >> n.roll;
   cout << "Enter Student Name : ";
   cin >> n.name;
   cout << "Enter Student Marks : ";
   cin >> n.marks;

   cout << "Student Roll No. = " << n.roll << endl;
   cout << "Student Name = " << n.name << endl;
   cout << "Student Marks = " << n.marks << endl;
   return 0;
}