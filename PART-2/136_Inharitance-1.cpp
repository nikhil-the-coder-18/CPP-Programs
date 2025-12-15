/* 136 : Write a C++ Program to Explain Inharitance - 1 .
   Date : 15/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Dad {
    protected :
        int amount;
    public :
        void Input () {
            amount = 10000;
        }
};

class Son : public Dad {
    private :
        int money;
    public : 
        void Show() {
            money = 5000;

            cout << "Dad has Amount : " << amount << endl;
            cout << "Son has Money : " << money << endl;
        }
};

int main () {
    Son Obj;
    Obj.Input();
    Obj.Show();
    return 0;
}