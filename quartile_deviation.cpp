//Write a program to find Quartile deviation of an ungrouped data.

#include <iostream>
using namespace std;

int main()
{
     int a[100], i, t, j, n1, n3, n;
     double q1, q3, qd;
     cout<<"Enter Number Of Items FIrst : ";
     cin>>n;
     cout << "\nNow! Enter " <<n <<" Values : ";
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
     cout <<"\nSorted Array Below :)";
     for (i = 0; i < n; i++)
     {
          cout << "\n         "
               << a[i];
     }
     n1 = (n + 1) * 0.25;
     n3 = (n + 1) * 0.75;
     q1 = a[n1 - 1];
     q3 = a[n3 - 1];
     qd = (q3 - q1) / 2;
     cout << "\nLower Quartile = " << q1;
     cout << "\nUpper Quartile = " << q3;
     cout << "\nQUARTILE DEVIATION= " << qd;
     return (0);
}
