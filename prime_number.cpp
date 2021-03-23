//Write a program to check prime number.

#include <iostream>
using namespace std;

int main()
{
    int num = 0, i, prime = 0;
    cout << "Enter any number to check whether it is a prime number or not." << endl
         << "Note :- Should be a positive integer" << endl
         << "\nEnter The Number Here  :  ";
    cin >> num;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (num == 1)
    {
        cout << "\n"
             << num << " is niether prime nor composite.!!" << endl;
    }
    else
    {
        if (prime == 0)
            cout << "\n"
                 << num << " is a prime number.!! :)" << endl;
        else
        {
            cout << "\n"
                 << num << " is not a prime number.!! :/" << endl;
        }
    }
    return 0;
}
