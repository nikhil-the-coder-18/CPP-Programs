/* 153 : Write a C++ Program to Explain Function Overloading - 2 .
   Date : 22/12/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;

void logEvent(string eventName)
{
    cout << "Event: " << eventName << endl;
}

void logEvent(string eventName, string location)
{
    cout << "Event: " << eventName << ", Location: " << location << endl;
}

int main()
{
    logEvent("Conference");
    logEvent("Concert", "Stadium");
    return 0;
}