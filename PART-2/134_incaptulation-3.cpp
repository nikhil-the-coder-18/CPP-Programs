/* 134 : Write a C++ Program to Explain Incaptulation - 3.
   Date : 12/12/2025
   Author : Nikhil */

#include<iostream>
using namespace std;
class Person {
    private :
        string name;
    public :
        void setname (string n) {
            name = n;
        }

        string getName() {
            return name;
        }
};

int main () {
    Person P;
    P.setname("Nikhil");
    cout << "Your Name is : " << P.getName() << endl;
    return 0;
}