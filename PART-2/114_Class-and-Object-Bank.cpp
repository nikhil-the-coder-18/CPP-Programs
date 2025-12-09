/* 114 : Write a C++ Program to Create Bank Account Simulation Using Class And Objects.
   Date : 20/11/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
class BankAccount
{
private:
    string holderName;
    double accountNumber;
    int balance;
    double dep, no, with;

public:
    createAccount()
    {
        cout << "Enter Account Holder Name : ";
        cin >> holderName;
    lable:
        cout << "Enter Account Number (6 Digits) : ";
        cin >> accountNumber;
        if (accountNumber >= 100000 && accountNumber <= 1000000)
        {
            cout << "Enter Balance You Want to Add : ";
            cin >> balance;
            cout << "\n\nAccount is Created......" << endl;
        }
        else
        {
            cout << "Account Number Shoud be 6 Digits...." << endl;
            goto lable;
        }
        cout << "-----------------------" << endl;
    }

    deposit()
    {
        cout << "\nEnter Your Account Number : ";
        cin >> no;
        cout << "-----------------------" << endl;
        if (no == accountNumber)
        {
            cout << "Account Holder Name : " << holderName << endl;
            cout << "Account Number : " << accountNumber << endl;
            cout << "Enter Total Amount You Want to deposit : ";
            cin >> dep;
            balance += dep;
            cout << "The Amount " << dep << "Rs. is Sucessfully Deposited to Your Account...." << endl;

            cout << "\n----------------------------" << endl;
            cout << "Account Holder Name : " << holderName << endl;
            cout << "Account Number : " << accountNumber << endl;
            cout << "Your Final Current Balance is : " << balance << endl;
            cout << "------------------------------" << endl;
        }
        else
        {
            cout << "Your Account Number is Wrong.. Try again..." << endl;
        }
        cout << "-----------------------" << endl;
    }

    Withdrow()
    {
        cout << "\nEnter Your Account Number : ";
        cin >> no;
        cout << "-----------------------" << endl;
        if (no == accountNumber)
        {
            cout << "Account Holder Name : " << holderName << endl;
            cout << "Account Number : " << accountNumber << endl;
            cout << "Enter Total Amount You Want to Withdraw : ";
            cin >> with;
            balance -= with;
            cout << "The Amount " << with << "Rs. is Sucessfully Deducted From Your Account...." << endl;

            cout << "\n----------------------------" << endl;
            cout << "Account Holder Name : " << holderName << endl;
            cout << "Account Number : " << accountNumber << endl;
            cout << "Your Final Current Balance is : " << balance << endl;
            cout << "------------------------------" << endl;
        }
        else
        {
            cout << "Your Account Number is Wrong.. Try again..." << endl;
        }
        cout << "-----------------------" << endl;
    }

    Balance()
    {
        cout << "\nEnter Your Account Number : ";
        cin >> no;
        cout << "-----------------------" << endl;
        if (no == accountNumber)
        {
            cout << "Account Holder Name : " << holderName << endl;
            cout << "Account Number : " << accountNumber << endl;
            cout << "Your Total Current Balance is : " << balance << endl;
        }
        else
        {
            cout << "Your Account Number is Wrong.. Try again..." << endl;
        }
        cout << "-----------------------" << endl;
    }
};
int main()
{
    BankAccount user1, user2, user3;
    int ch;
    while (true)
    {
        cout << "\nWELCOME TO THE BANK" << endl;
        cout << "-----------------------" << endl;
        cout << "What You Want ?" << endl;
        cout << "Type 1 To Create New Bank Account." << endl;
        cout << "Type 2 To Deposit Money in your Bank Account." << endl;
        cout << "Type 3 to Withdraw money from your Bank Account." << endl;
        cout << "Type 4 to Chek Your Balance.\n"
             << endl;
        cout << "Type 5 to Exit.\n"
             << endl;
        cout << "Enter Your Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            user1.createAccount();
            break;

        case 2:
            user1.deposit();
            break;

        case 3:
            user1.Withdrow();
            break;

        case 4:
            user1.Balance();
            break;

        case 5:
            break;

        default:
            cout << "Invalid Choice..." << endl;
        }
    }
    return 0;
}