/* 11 : Simple Interest.
   Date : 15/09/2025
   Author : Nikhil  */

include<iostream>
using namespace std;
int main ()
{
    int p,r,n;
    cout << "Enter Principle Amount : ";
    cin >> p;
    cout << "Enter Rate : ";
    cin >> r;
    cout << "Enter Year : ";
    cin >> n;
    cout << "Your simple interest is : " << (p*r*n/100);
    return 0;
}