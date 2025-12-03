/* 91 : File Handling Append example.
   Date : 13/11/2025
   Author : Nikhil  */

#include<iostream>
#include<fstream>
using namespace std;
int main () {
    ofstream newfile("my_file.txt");

    if(!newfile) {
        cout << "Error in Opening";
        return 0;
    }

    newfile << "I am 17 years old, " << endl;
    newfile << "I am pursuing BCA now..." << endl;
    return 0;
}