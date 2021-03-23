//Write a program to calculate mean of an ungrouped data.

#include <iostream>
using namespace std;

int main()
{
     int i;
     float a[100], sum = 0, n, mean;
     cout<<"Enter Number Of Items FIrst : ";
     cin>>n;
     cout << "\nNow! Enter " <<n <<" Values : ";
     for (i = 0; i < n; i++) 
     {
          cin >> a[i];
          sum+= a[i];
     }
     mean = sum / 10;
     cout << "\nMean = " << mean;
     return (0);
}
