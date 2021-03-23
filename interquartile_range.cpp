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

    float q1, q3, iqr;
    float q1_pos, q3_pos;
    q1_pos = (n+1)/4.0;
    q3_pos = (3 * (n+1))/4.0 ;


    q1 = arr[(int)q1_pos - 1] + (((int)(q1_pos*100) % 100) /100.0 * (arr[(int)q1_pos] - arr[(int)q1_pos - 1] )) ; 
    
    q3 = arr[(int)q3_pos - 1] + (((int)(q3_pos*100) % 100) /100.0 * (arr[(int)q3_pos] - arr[(int)q3_pos - 1] )) ;


    // cout << "\nQ1 = " << q1 << endl;
    // cout << "\nQ3 = " << q3 << endl;

    iqr = q3 - q1;
    
    cout << "\nInterquartile Range = " << iqr << endl;


    return 0;
    
}
