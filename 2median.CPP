//Write a program to calculate median of an ungrouped data.

#include <iostream>
using namespace std;

int main()
{
     int i, j, t, a[100], n = 0;
     cout << "Enter Number Of Items FIrst : ";
     cin >> n;
     cout << "\nNow! Enter " << n << " Values : ";
     for (i = 0; i < n; i++)
     {
          cin >> a[i];
     }
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
     for (i = 0; i < n; i++)
     {
          cout << "\n"
               << a[i];
     }

     if (n % 2 != 0)
     {
          double m = a[((n + 1) / 2) - 1];
          cout << "\nmedian " << m;
     }
     else
     {
          double m = (a[(n / 2) - 1] + a[n / 2]) / 2;
          cout << "\nmedian " << m;
     }
     return (0);
}