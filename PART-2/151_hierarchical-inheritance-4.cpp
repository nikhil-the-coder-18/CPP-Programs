/* 151 : Write a C++ Program to Explain Heirarchical Inheritannce - 4 - Notification System.
   Date : 22/12/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
class Notification
{
public:
   string message;
   void inputMessage()
   {
      cout << "Enter Your Messaage: ";
      cin >> message;
      cout << "Message: " << message << endl;
   }
};

class Email : public Notification
{
public:
   void sendEmail()
   {
      cout << "Email Sent!" << endl;
   }
};

class SMS : public Notification
{
public:
   void sendSMS()
   {
      cout << "SMS Sent!" << endl;
   }
};

class AppAlert : public Notification
{
public:
   void sendAlert()
   {
      cout << "App Alert Sent!" << endl;
   }
};

int main () {
   Email email;
   SMS sms;
   AppAlert alert;

   email.inputMessage(); email.sendEmail();
   sms.inputMessage(); sms.sendSMS();
   alert.inputMessage(); alert.sendAlert();

   return 0;
}
