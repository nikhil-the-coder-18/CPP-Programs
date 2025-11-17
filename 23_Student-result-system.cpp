/* 23 : If-Else Statement (Student Result System).
   Date : 19/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    string name;
    int phy, chem, math, eng, marks, percentage;
    cout << "\nEnter Your Name : ";
    cin >> name;
    cout << "Hello " << name;
    cout << "\nEnter Your Physics Marks : ";
    cin >> phy;
    cout << "\nEnter Your Chemistry Marks : ";
    cin >> chem;
    cout << "\nEnter Your Mathematics Marks : ";
    cin >> math;
    cout << "\nEnter Your English Marks : ";
    cin >> eng;
    cout << "\n";
    
    marks = phy + chem + math + eng;
    percentage = marks/4;

    for (int i=1 ; i <= 25 ; i++)
    {
        cout << "* ";
    }
    
    cout << "\nYOUR NAME : " << name;
    cout << "\nTOTAL MARKS : " << marks << "/400";
    cout << "\nYOUR PERCENTAGE : " << percentage << "%\n";

    if (percentage <= 100 && percentage >= 90)
    {
        cout << "Grade : A\n";
    }
    else if (percentage <= 89 && percentage >= 70)
    {
        cout << "Grade : B\n";
    }
    else if (percentage <= 69 && percentage >= 60)
    {
        cout << "Grade : C\n";
    }
    else if (percentage <= 59 && percentage >= 50)
    {
        cout << "Grade : D\n";
    }
    else if (percentage <= 49 && percentage >= 33)
    {
        cout << "Grade : Pass\n";
    }
    else if (percentage < 33 && percentage >= 0)
    {
        cout << "YOU ARE FAIL !!!! (Padh Liya Kar Yaar)\n";
    }
    else {
        cout << "Invalid Marks Entered\n";
    }

    for (int i=1 ; i <= 25 ; i++)
    {
        cout << "* ";
    }
    
    cout << "\n";

    return 0;
}