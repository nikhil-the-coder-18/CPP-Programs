/* 79 : Enum Example 2.
   Date : 10/11/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
int main()
{
    enum weekdays
    {
        SUNDAY = 1,
        MONDAY,
        TUESDAY,
        WEDNESSDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };

    int day;
    cout << "\nGet Weekdays Name !!! " << endl << endl;
    cout << "Enter The Number Of The Weekday : ";
    cin >> day;

    weekdays today = static_cast<weekdays>(day);

    switch (day)
    {
    case SUNDAY:
        cout << "It's Sunday";
        break;
    case MONDAY:
        cout << "It's Monday";
        break;
    case TUESDAY:
        cout << "It's TUESDAY";
        break;
    case WEDNESSDAY:
        cout << "It' wednessday";
        break;
    case THURSDAY:
        cout << "It's THURSDAY";
        break;
    case FRIDAY:
        cout << "It's Friday";
        break;
    case SATURDAY:
        cout << "It's Saturday";
        break;
    default:
        cout << "Nothing";
        break;
    }
    return 0;
}