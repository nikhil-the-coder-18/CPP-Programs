/* 133 : Write a C++ Program to Explain Incaptulation - 2.
   Date : 12/12/2025
   Author : Nikhil */

#include<iostream>
using namespace std;
class BankAccount {
    private : 
        double balance;
    public :
        BankAccount(double initialBalance) {
            balance = initialBalance;
        }

        void Deposite (double amount) {
            balance += amount;
        }

        double getBalance() {
            return balance;
        }
};

int main () {
    BankAccount B(10000);
    B.Deposite(5000);
    cout << "Total Balance is = " << B.getBalance() << endl;
    return 0;
}
