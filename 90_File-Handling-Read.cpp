/* 90 : File Handling Read Example.
   Date : 13/11/2025
   Author : Nikhil  */

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main () {
    string name;
    ifstream newfile("my_file.txt");
    while(getline(newfile, name)) {
        cout << name << endl;
    }
    return 0;
}