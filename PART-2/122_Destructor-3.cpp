/* 122 : Write a C++ Program to Explain Destructor - 3.
   Date : 05/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Demo {
    private :
        int id;
    public :
    Demo(int x) {
        id = x;
        cout << "Id Called By Constructor = " << id << endl;
    }

    ~Demo() {
        cout << "Id Called By Destructor = " << id << endl;
    }
};

int main () {
    Demo id1(101);
    Demo id2(102);
    cout << "All Objects are active..." << endl;
    return 0;
}