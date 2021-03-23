//Write a program to find Quartile deviation of an ungrouped data.

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {20, 35, 25, 12, 10, 23, 18, 14, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    float q1, q3, qd;
    float q1_pos, q3_pos;
    q1_pos = (n+1)/4.0;
    q3_pos = (3 * (n+1))/4.0 ;


    q1 = arr[(int)q1_pos - 1] + (((int)(q1_pos*100) % 100) /100.0 * (arr[(int)q1_pos] - arr[(int)q1_pos - 1] )) ; 
    
    q3 = arr[(int)q3_pos - 1] + (((int)(q3_pos*100) % 100) /100.0 * (arr[(int)q3_pos] - arr[(int)q3_pos - 1] )) ;


    // cout << "\nQ1 = " << q1 << endl;
    // cout << "\nQ3 = " << q3 << endl;

    qd = (q3 - q1) / 2.0;

    cout << "\n (semi-interquartile range) or Quartile Deviation = " << qd << endl;

    return 0;

}
