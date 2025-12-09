/* 107 : Write a C++ Program to Show use of class and objects Example 3.
   Date : 17/11/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;

class Form
{
private:
    char name[3][20];
    int age[3];
    float percentage[3];

public:
    void AdmissionForm(int i)
    {
        cout << "\nEnter Student " << i + 1 << " Details : " << endl;
        cout << "Enter Student Name : ";
        cin >> name[i];
        cout << "Enter Student Age : ";
        cin >> age[i];
        cout << "Enter 12th Percentage : ";
        cin >> percentage[i];
    }

    void StudentList(int i)
    {
        cout << "\n* Student " << i + 1 << " Details :- " << endl;
        cout << "Student Name : " << name[i] << endl;
        cout << "Student Age : " << age[i] << endl;
        cout << "Student 12th Percentage : " << percentage[i] << endl;
    }
};

int main()
{
    Form Student;

    for (int i = 0; i < 3; i++)
    {
        Student.AdmissionForm(i);
    }

    for (int i = 0; i < 3; i++)
    {
        Student.StudentList(i);
    }

    return 0;
}
