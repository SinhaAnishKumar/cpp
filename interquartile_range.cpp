//Write a program to find Inter-Quartile range of an ungrouped data.

#include <iostream>
using namespace std;

int main()
{
     int i, j;
     int a[100], t, n1, n3, n;
     float q1, q3, iqr;
     cout<<"Enter Number Of Items FIrst : ";
     cin>>n;
     cout << "\nNow! Enter " <<n <<" Values : ";
     for (i = 0; i < n; i++)
     {
          cin >> a[i];
     }
     n1 = (n + 1) * 0.25;
     n3 = (n + 1) * 0.75;
     for (i = 0; i < n; i++)
     {
          for (j = 0; j < n - 1; j++)
          {
               if (a[j] > a[j + 1])
               {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
               }
          }
     }
     q1 = a[n1 - 1];
     q3 = a[n3 - 1];
     iqr = q3 - q1;
     cout << "\nLower Quartile = " << q1;
     cout << "\nUpper Quartile = " << q3;
     cout << "\nInterquartile Range = " << iqr;
     return (0);
}
