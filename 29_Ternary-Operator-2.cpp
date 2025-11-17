/* 29 : Ternary Operator Example -2.
   Date : 23/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int marks;
    char result[500];
    cout << "Enter Your Total marks of 6 subjects out of 600 : ";
    cin >> marks;
    (marks >= 500) ? "You Are Grate" : ((marks >= 350 && marks < 499) ? "You are Avarage" : ((marks >= 200 && marks <= 199) ? "You Need Extra Efforts" : "YOU ARE FAILED"));
    cout << result;
    return 0;
}