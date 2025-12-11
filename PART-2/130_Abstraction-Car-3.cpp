/* 130 : Write a C++ Program to Explain Abstraction - Car Control System.
   Date : 09/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Car {
    private :
        void engine () {
            cout << "(Engine initialized... Fuel checking done.)" << endl;
        }

    public :
        void startcar () {
            cout << "Car Started" << endl;
        }

        void Accelerate() {
            cout << "Car Accelerating..." << endl;
        }

        void Stopcar() {
            cout << "Car Stopped." << endl;
        }
};

int main () {
    Car C;

    // C.engine(); //hidden
    C.startcar();
    C.Accelerate();
    C.Stopcar();

    return 0;
}