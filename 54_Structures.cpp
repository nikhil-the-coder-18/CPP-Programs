/* 53 : Structures Example.
   Date : 03/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;

struct student {
    string name;
    int roll_no;
    float percentage;
};

int main () {
    student s1;
    s1.name = "Zeeshan";
    s1.roll_no = 20;
    s1.percentage = 78.89;

    cout << s1.name << endl << s1.roll_no << endl << s1.percentage << endl;
    return 0;
}
