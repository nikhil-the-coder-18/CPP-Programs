/* 146 : Write a C++ Program to Explain Multiple Inheritance - 3.
   Date : 19/12/2025
   Author : Nikhil  */
 
#include<iostream>
using namespace std;
class Student {
    public :
        int roll;
        string name;
        void Details() {
            cout << "Enter Student Name: ";
            cin >> name;
            cout << "Enter Student Roll No.: ";
            cin >> roll;
        }
};
class Sports {
    public:
        int marks;
        void Sportsmarks() {
            cout << "Enter Student Sports marks: ";
            cin >> marks;
        }
};
class Result : public Student, public Sports {
    public :
        void Show () {
            int result = marks + 500;
            cout << "\n------RESULT--------" << endl;
            cout << "Student Roll No.: " << roll << endl;
            cout << "Student Name: " << name << endl;
            cout << "Total Marks is: " << result << endl;
            cout << "Student Percentage is: " << ((500 + marks)/6) << endl;
        }
};

int main () {
    Result Student1;
    Student1.Details();
    Student1.Sportsmarks();
    Student1.Show();
    return 0;
}