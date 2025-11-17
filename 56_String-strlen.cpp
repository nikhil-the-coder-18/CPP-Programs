/* 56 : String - strlen() Function.
   Date : 04/11/2025
   Author : Nikhil  */

#include<iostream>
#include<string.h>
using namespace std;
int main (){
    char fruit[50];
    cout << "Enter Any Fruit Name : ";
    cin >> fruit;
    int length = strlen(fruit);
    cout << "Length of the " << fruit << " is " << length << endl;
    return 0;
}