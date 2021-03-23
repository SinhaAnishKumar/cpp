//Write a program to calculate mode of an ungrouped data.

#include <iostream>
using namespace std;

int main()
{
     int n, c = 0, i, j, a[100], count = 0, k;
     cout << "Enter Number Of Items FIrst : ";
     cin >> k;
     cout << "\nNow! Enter " << k << " Values : ";
     for (i = 0; i < k; i++)
     {
          cin >> a[i];
     }
     n = a[0];
     for (i = 0; i < k; i++)
     {
          if (a[i] == n)
               c++;
     }
     for (i = 0; i < k; i++)
     {
          count = 0;
          for (j = 0; j < k; j++)
          {
               if (a[i] == a[j])
               {
                    count++;
               }
          }
          if (count > c)
          {
               n = a[i];
               c = count;
          }
     }
     cout << "\nMode " << n;
     return (0);
}
