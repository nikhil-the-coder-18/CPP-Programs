/* 127 : Write a C++ Program to Explain Friend Class -- Library - Books System.
   Date : 08/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
class Library {
    private :
        string name;
        int pages;
        float price;
    public :
        Library(string n, int p, float c) {
            name = n;
            pages = p;
            price = c;
        }
    friend class Book;
};

class Book {
    public :
        void BInfo (Library ref) {
            cout << "Book Name : " << ref.name << endl;
            cout << "Book Pages : " << ref.pages << endl;
            cout << "Book Cost : " << ref.price << "$" << endl;
        }
};

int main () {
    Library book1("Harry Potter and the Half-Blood Prince", 364, 823.914);
    Book B;
    B.BInfo(book1);
    return 0;
}