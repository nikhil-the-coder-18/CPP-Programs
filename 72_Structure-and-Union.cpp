/* 72 : Structure & Union Combined Example.
   Date : 07/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
struct name {
    int roll;
    char name[10];
    float marks;
};

union name2 {
    int roll;
    char name[10];
    float marks;
};

int main() {
    struct name n;
    union name2 n2;
    cout << "Structure Size : " << sizeof(n) << endl;
    cout << "Union Size : " << sizeof(n2) << endl;
    return 0;
}