/* 27 : Switch Case - Vowels.
   Date : 20/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int ch;
    cout << "Enter Choice : ";
    cin >> ch;
    switch(ch)
    {
        case 1 : cout << "A";
        break;
        case 2 : cout << "E";
        break;
        case 3 : cout << "I";
        break;
        case 4 : cout << "O";
        break;
        case 5 : cout << "U";
        break;
        case 6 : cout << "a";
        break;
        case 7 : cout << "e";
        break;
        case 8 : cout << "i";
        break;
        case 9 : cout << "o";
        break;
        case 10 : cout << "u";
        break;
        default : "invalid choice";
    }
    return 0;
}