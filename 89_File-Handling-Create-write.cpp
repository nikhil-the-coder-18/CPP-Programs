/* 89 : File Handling Create and Write Example.
   Date : 13/11/2025
   Author : Nikhil  */

#include<iostream>
#include<fstream>
using namespace std;
int main () {
    ofstream newfile("my_file.txt");
    newfile << "Hello Guys, I am Nikhil...";
    cout << "File is Created...";
    newfile.close();
    return 0;
}