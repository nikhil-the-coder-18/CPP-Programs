/* 155 : Write a C++ Program to Explain Function Overloading - 4 (Ticket Booking System) .
   Date : 22/12/2025
   Author : Nikhil  */

#include<iostream>
#include<string>
using namespace std;
class Ticket {
    public:
        void bookTicket(string name) {
            cout << "Ticket Booked for: " << name << endl;
        }

        void bookTicket(string name, int seats) {
            cout << "Ticket Booked for: " << name << endl;
            cout << "Number of Seats: " << seats << endl;
        }

        void bookTicket(string name, int seats, float price) {
            cout << "Ticket Booked for: " << name << endl;
            cout << "Booked Seats: " << seats << endl;
            cout << "Total Price: " << seats*price << "Rs." << endl;
        }
};

int main () {
    Ticket T;

    T.bookTicket("Nikhil");
    cout << endl;
    T.bookTicket("Bhavy", 5);
    cout << endl;
    T.bookTicket("Prem", 4, 149.2);

    return 0;
}