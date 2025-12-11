/* 131 : Write a C++ Program to Explain Incaptulation.
   Date : 11/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Thief {
    private:
        string name, address;
        int monumber;
    public :
        void input() {
            name = "Bhavy";
            address = "Ayodhyanagar, Kadi";
            monumber = 8511177;
        }
        void output() {
            cout << "Thief Name = " << name << endl;
            cout << "Thief Address = " << address << endl;
            cout << "Thief Mobile Number = " << monumber << endl;
        }
};

class Police:public Thief {

};

int main () {
    Police p;
    p.input();
    p.output();
    return 0;
}