/* 111 : Write a C++ Program to Show use of class and objects Example 4.
   Date : 19/11/2025
   Author : Nikhil  */

#include<iostream>
#include<string>
using namespace std;
class Form
{
private:
    string name;
    string f_name;
    int age;

public:
    void FillForm()
    {
        cout << "\nFill The Form !\n"
            << endl;
        cout << "Enter Your Name : ";
        cin >> name;
        cout << "Enter Your Age : ";
        cin >> age;
        cout << "Enter Your Father's Name : ";
        cin >> f_name;
    }
    void ShowInfo()
    {
        cout << "\nYour Name is : " << name << endl;
        cout << "Your Age is : " << age << endl;
        cout << "Your Father's Name is : " << f_name << endl;
    }
};
int main()
{
    Form Nikhil, Bhavy;
    Nikhil.FillForm();
    Bhavy.FillForm();
 
    Nikhil.ShowInfo();
    Bhavy.ShowInfo();
    return 0;
}