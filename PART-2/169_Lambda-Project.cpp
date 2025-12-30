/* 169 : Lambda Function Mini Project - Simple Task Manager.
   Date : 30/12/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;

void RunTheTask(auto RunTask) {
    RunTask();
}

int main () {

    string Institute = "Nutan Computer";
    bool System = false;

    cout << endl;

    auto Welcome = []() {
        cout << "- Welcome to our Classes" << endl;
    };

    Welcome();

    auto InstituteName = [Institute]() {
        cout << "- Institute Name: " << Institute << endl;
    };

    InstituteName();

    auto OnSystem = [&System]() {
        System = true;
    };

    OnSystem();
    if(System) { cout << "- System is Running..." << endl; }

    RunTheTask([](){
        cout << "- Task is Running" << endl;
    });

    []() {
        cout << "- Temporary Check Done..." << endl;
    }();


    cout << endl;

    return 0;
}