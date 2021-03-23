//Write a program to find Standard deviation of an ungrouped data.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
     int a[100], i, s = 0, x[10], n;
     double m, sd;
     cout<<"Enter Number Of Items FIrst : ";
     cin>>n;
     cout << "\nNow! Enter " <<n <<" Values : ";
     for (i = 0; i < n; i++)
     {
          cin >> a[i];
          s = s + a[i];
     }
     m = s / n;
     s = 0;
     for (i = 0; i < n; i++)
     {
          x[i] = pow((a[i] - m), 2);
          s = s + x[i];
     }
     sd = sqrt((s / n));
     cout << "\n STSNDARD DEVIATION=" << sd;
     return (0);
}
