/* 129 : Write a C++ Program to Explain Function with Abstraction.
   Date : 09/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
void CalculateBill (int Q, int R) {
    int total = Q * R;
    cout << "Total Bill : " << total << "$" << endl;
}
int main () {
    cout << "Customer 1 orders 2 pizzas." << endl;
    CalculateBill(2, 5); // Pizza Price : 5$

    cout << "Customer 2 orders 3 burgers." << endl;
    CalculateBill(3, 2); // Burger Price : 2$

    return 0;
}