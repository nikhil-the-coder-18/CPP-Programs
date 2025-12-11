/* 130 : Write a C++ Program to Explain Abstraction - Online Shopping Cart.
   Date : 09/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class ShoppingCart {
    private :
        float total = 0;

        float applyGST (float amount) {
            return amount + (amount * 0.18); // 18% GST
        }

        float applyDis (float amount) {
            return amount - (amount * 0.10); // 10% Discount
        }

    public :
        void addItem(float price) {
            total += price;
            cout << "Item Added For Rs." << price << endl;
        }

        void RemoveItem(float price) {
            total -= price;
            cout << "Item Removed For Rs." << price << endl;
        }

        void Bill() {
            float afterDiscount = applyDis(total);
            float finalprice = applyGST(afterDiscount);

            cout << "\n------- Bill ---------" << endl;
            cout << "Before Discount Rs." << total << endl;
            cout << "After Discount Rs." << afterDiscount << endl;
            cout << "Final Amount (With GST) = Rs." << finalprice << endl;
        }
};

int main () {
    ShoppingCart cart;
    
    cart.addItem(500);
    cart.addItem(300);
    cart.RemoveItem(100);

    cart.Bill();

    return 0;
}