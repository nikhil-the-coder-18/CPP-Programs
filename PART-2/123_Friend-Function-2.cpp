/* 120 : Write a C++ Program to Explain Friend Function 2.
   Date : 06/12/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;

class AvarageCalculator
{
private:
    int no1, no2;

public:
    AvarageCalculator(int n1, int n2)
    {
        no1 = n1;
        no2 = n2;
    }

    friend float Avarage(AvarageCalculator ref);
};

float Avarage(AvarageCalculator ref)
{
    return (ref.no1 + ref.no2) / 2.0;
}

int main()
{
    AvarageCalculator obj(10, 20);
    cout << "Average = " << Avarage(obj) << endl;
    return 0;
}
