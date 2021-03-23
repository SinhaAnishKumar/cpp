//Write a program to find area of a circle.

#include <iostream>
using namespace std;
#define PI 3.14

int main()
{
     float area = 0, r = 0;

     cout << "Enter The Radius Of Circle :  ";
     cin >> r;

     area = PI * r * r;

     cout << "Area Of Circle = " << area << endl;

     return 0;
}
