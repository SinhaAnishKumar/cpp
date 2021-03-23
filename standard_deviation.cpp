#include <iostream>
#include <cmath>

#define MAXSIZE 10
using namespace std;
 
int main()
{
    float x[MAXSIZE];
    int  i, n;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
 
    cout << "Enter the value of N \n";
    cin >> n;
    cout << "Enter " << n << " real numbers \n";
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    /*  Compute the sum of all elements */
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    average = sum / (float)n;
    /*  Compute  variance  and standard deviation  */
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((x[i] - average), 2);
    }
    variance = sum1 / (float)n;
    std_deviation = sqrt(variance);

    // cout << "Average of all elements = " <<  average << endl;
    // cout << "variance of all elements = " << variance << endl;
    cout << "Standard deviation = " << std_deviation << endl;

    return 0;
}
