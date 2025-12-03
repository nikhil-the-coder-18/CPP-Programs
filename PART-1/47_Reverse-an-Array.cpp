/* 47 : Take and Array And Print it in Reverse.
   Date : 30/09/2025
   Author : Nikhil  */

   
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Array Length : ";
    cin >> n;

    int array[n]; 

    cout << "Enter " << n << " Elements : " <<  endl;
    for (i = 0; i <= n; i++)
    {
        cin >> array[i];
    }

    cout << endl;

    cout << "Array Elements In Reverse Order : "
    for (int i = n-1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }

    return 0;
}
