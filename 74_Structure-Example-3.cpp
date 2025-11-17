/* 74 : Structure Example 3.
   Date : 08/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
struct distance {
    int feet;
    int inch;
};
int main () {
    struct distance d;
    cout << "Enter The Feet : ";
    cin >> d.feet;
    cout << "Enter the Inches : ";
    cin >> d.inch;

    cout << "\nDistance = " << d.feet << " Feet and " << d.inch << " Inches." << endl;
    return 0;
}