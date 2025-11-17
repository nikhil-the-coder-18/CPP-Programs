/* 17 : If-Else Statement (User Pass Login).
   Date : 19/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int user = 102030, u, pass = 180608, p;
    cout << "Enter Username : ";
    cin >> u;
    cout << "Enter Password : ";
    cin >> p;
    if(user == u && pass == p)
    {
        cout << "Welcome" << endl;
    }
    else 
    {
        cout << "wrong username or password" << endl;
    }
    return 0;
}
