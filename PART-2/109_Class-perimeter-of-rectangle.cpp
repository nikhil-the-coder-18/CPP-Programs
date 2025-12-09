/* 109 : Write a C++ Program to Claculate paremeter of rectangle Using Class And Objects.
   Date : 18/11/2025
   Author : Nikhil  */

#include <iostream>
using namespace std;
class POR
{
private:
    double result;

public:
    void peremeter(float w, float l)
    {
        result = 2 * (w + l);
        cout << "Your Peremeter of Rectangle is = " << result << endl;
    }
};

int main()
{
    POR value;
    int l, w;
    cout << "\nFIND PEREMETER OF RECTANGLE\n"
         << endl;
    cout << "Enter Length : ";
    cin >> l;
    cout << "Enter Width : ";
    cin >> w;
    value.peremeter(w, l);
    return 0;
}