/* 113 : Write a C++ Program to Create Calculator 2 Using Class And Objects.
   Date : 19/11/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
class Calculator
{
private:
    int a, b;

public:
    void addition(int a, int b)
    {
        cout << "Your Addition : " << a + b << endl;
    }
    void subtraction(int a, int b)
    {
        cout << "Your Subtraction : " << a - b << endl;
    }
    void multiplication(int a, int b)
    {
        cout << "Your Multiplication : " << a * b << endl;
    }
    void division(int a, int b)
    {
        cout << "Your Division : " << a / b << endl;
    }
};
int main()
{
    Calculator add, sub, mult, div;
    int no1, no2;
    cout << "Enter The First Number : ";
    cin >> no1;
    cout << "Enter The Second Number : "; 
    cin >> no2;
    add.addition(no1, no2);
    sub.subtraction(no1, no2);
    mult.multiplication(no1, no2);
    div.division(no1, no2);
    return 0;
}