/* 66 : Storage class Local Variable.
   Date : 06/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
void fun ();
int main () {
    int var = 10;
    fun();

    cout << var1 << endl; // Not allowed
}
void fun() {
    int var1 = 20;

    cout << var << endl; // Not allowed
}