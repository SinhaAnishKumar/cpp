//Write a program to show function overloading.

#include <iostream>
using namespace std;

int sum(int num1, int num2)

{
     return num1 + num2;
}

float sum (int num1, int num2, int num3)
{
     return num1 + num2 + num3;
}

int main()
{
     int result1 = sum (5, 10);
     cout << "Sum = " << result1 << "\n";

     float result2 = sum (5, 10, 15);
     cout << "Sum = " << result2 << "\n";

     return 0;
}