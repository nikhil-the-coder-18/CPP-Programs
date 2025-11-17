/* 80 : Enum Example 3.
   Date : 10/11/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main () {
    enum direction {EAST, WEST, NORTH, SOUTH};

    direction dir = EAST;

    switch (dir) {
        case NORTH:
            cout << "Going North";
            break;
        case SOUTH:
            cout << "Going South";
            break;
        case EAST:
            cout << "Going East";
            break;
        case WEST:
            cout << "Going West";
            break;
    }
    return 0;
}