/* 135 : Write a C++ Program to Explain Incaptulation - 4.
   Date : 12/12/2025
   Author : Nikhil */

#include<iostream>
using namespace std;
class Car {
    private :
        int speed;
    public :
        void setspeed (int s) {
            if(s >= 0) {
                speed = s;
            }
        }

        int getspeed() {
            return speed;
        }
};

int main () {
    Car BMW;
    BMW.setspeed(250);
    cout << " Your Car speed is = " << BMW.getspeed() << endl;
    return 0;
}