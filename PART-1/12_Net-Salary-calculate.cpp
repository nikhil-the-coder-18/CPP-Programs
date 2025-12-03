/* 12 : Net Salary Calculate.
   Date : 16/09/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    float salary,hra,da,bonus,ma,tax,pf,totaladd,totaldec, net_salary;
    cout << "\nEnter Your Total salary : ";     

    cin >> salary;
    hra = 0.2*salary;            // House Rend Allowance
    da = 0.5*salary;        // House Dearness Allowance
    bonus = 0.15*salary;
    ma = 0.1*salary;    // MAdical Allowance
    totaladd = hra + da + bonus + ma;

    tax = 0.4*salary;
    pf = 0.15*salary;
    totaldec = tax + pf;
    net_salary = salary + totaladd - totaldec;
    cout << "Your Final Salary is = " << net_salary;
    return 0;
}