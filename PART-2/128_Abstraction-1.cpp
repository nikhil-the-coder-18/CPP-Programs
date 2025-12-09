/* 128 : Write a C++ Program to Explain Abstraction.
   Date : 09/12/2025
   Author : Nikhil  */

// Data abstraction is a technique by which only necessary data is 
// shown to the user and unnecessary data is hidden.

#include<iostream>
using namespace std;
class Bank {
    private :
        int atmpin, balance;
    public :
        string bname, IFSC;
        int accno;

        void input() {
            bname = "Bank of Baroda";
            IFSC = "BOBK01234";
            accno = 918511177244;
            atmpin = 1234;
            balance = 18000;
        }

        void output() {
            cout << "BANK DETAILS :" << endl;
            cout << "   Bank Name : " << bname << endl;
            cout << "   IFSC Code : " << IFSC << endl;
            cout << "   Account No. : " << accno << endl;
            cout << "   ATM Pin : " << atmpin << endl;
            cout << "   Total Balance : " << balance << endl;
        }
};

int main () {
    Bank obj;

    cout << endl << endl;
    cout << "Someone trying to Access your account..." << endl;
    cout << "BANK DETAILS :" << endl;
    cout << "   Bank Name : " << obj.bname << endl;
    cout << "   IFSC Code : " << obj.IFSC << endl;
    cout << "   Account No. : " << obj.accno << endl;
    // cout << "   ATM Pin : " << obj.atmpin << endl;          you can't access this private variables...
    // cout << "   Total Balance : " << obj.balance << endl;

    return 0;
}