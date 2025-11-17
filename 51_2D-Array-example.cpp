/* 51 : 2D Array Example.
   Date : 03/10/2025
   Author : Nikhil  */

#include<iostream>
using namespace std;
int main ()
{
    int i,j;
    int arr[2][2];
    cout << "enter the array Elements : ";
    for(i=0; i<=1; i++)
    {
        for(j=0;j<=1;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nYour array Elements : \n";
    for(i=0; i<=1; i++)
    {
        for(j=0;j<=1;j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
