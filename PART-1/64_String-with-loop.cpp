/* 64 : String with loop - to take name of 5 students and print them.
   Date : 05/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main () {
    string name[5];
    for(int i=0; i<=4; i++) {
        cout << "Enter The Name of Student " << i+1 << " : ";
        cin >> name[i];
    }
    for(int i=0; i<=4; i++) {
        cout << "Name of Student " << i+1 << " is " << name[i] << endl;
    }
    return 0;
}