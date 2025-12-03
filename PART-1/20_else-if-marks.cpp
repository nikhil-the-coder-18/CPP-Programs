/* 20 : If-Else Statement (MARKS / GRADE).
   Date : 19/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int marks;
    cout << "Enter Your Marks : ";
    cin >> marks;
    if (marks <= 100 && marks >= 90)
    {
        cout << "Grade : A";
    }
    else if (marks <= 89 && marks >= 70)
    {
        cout << "Grade : B";
    }
    else if (marks <= 69 && marks >= 60)
    {
        cout << "Grade : C";
    }
    else if (marks <= 59 && marks >= 50)
    {
        cout << "Grade : D";
    }
    else if (marks <= 49 && marks >= 33)
    {
        cout << "Grade : Pass";
    }
    else if (marks < 33 && marks >= 0)
    {
        cout << "YOU ARE FAIL !!!! (Padh Liya Kar Yaar)";
    }
    else {
        cout << "Invalid Marks";
    }
    return 0;
}