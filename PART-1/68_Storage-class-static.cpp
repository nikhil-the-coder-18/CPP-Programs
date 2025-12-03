/* 68 : Storage class Static Variable.
   Date : 06/11/2025
   Author : Nikhil  */

   //The main difference between local variable and static variable is that, the value of static variable persists the end of the program.

#include<iostream>
using namespace std;
void fun();
void fun () {
    static int n = 0;
    n++;
    cout << n << endl;
}
int main () {
    fun ();
    fun ();
    return 0;
}
