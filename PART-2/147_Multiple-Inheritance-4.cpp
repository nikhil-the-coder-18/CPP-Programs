/* 147 : Write a C++ Program to Explain Multiple Inheritance - 4 - Smart Student Card System.
   Date : 19/12/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
class Student
{
public:
   string StudentName;
   void inputStudent()
   {
      cout << "Enter Student Name: ";
      cin >> StudentName;
   }
};

class Institute
{
public:
   string instituteName;
   void inputInstitute()
   {
      cout << "Enter Institute Name: ";
      cin >> instituteName;
   }
};

class SmartCard : public Student, public Institute
{
public:
   string idcard = "25BCA24069";
   showCard()
   {

      cout << "Student Name : " << StudentName << endl;
      cout << "Institute : " << instituteName << endl;
      cout << "Card ID : " << idcard << endl;
   }
};

int main()
{
   SmartCard s;
   s.inputStudent();
   s.inputInstitute();
   s.showCard();
   
   return 0;
}