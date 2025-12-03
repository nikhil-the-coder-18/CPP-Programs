/* 37 : For Loop Login Attempt.
   Date : 24/09/2025
   Author : Nikhil  */

#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string pass = "bhavy";
    string input;
    for (int i=3 ; i>=0 ; i--)
    {
        cout << "Enter The Password : ";
        cin >> input;
        if (input == pass)
        {
            cout << "LOGIN SUCCESS !!!!" << endl;
            break;
        }
        else {
            cout << "Password is Wrong #";
            cout << "You have " << i << " Attempts Left" << endl;
        }   
    }
    return 0;
}