//Write a program to show function call by value/call by reference and function call by address.

#include <iostream>

using namespace std;
int x(int, int, int);   // call by value
int y(int &, int &, int &);  // call by reference
int z(int *, int *, int *);    // call by address
int main()
{
     int a, b, c, sum;
     cout << "Enter Three Numbers  :  ";
     cin >> a >> b >> c;
    
     sum = x(a, b, c);
     cout << "\n\nCalling By Value(s) \nSum  :  " << sum << endl;

     sum = y(a, b, c);
     cout <<"\n\nCalling By Reference(s) \nSum  :  " << sum << endl;

     sum = z(&a, &b, &c);
     cout <<"\n\nCalling By Address(s) \nSum  :  "<< sum << endl;
     return 0;
}

int x(int p, int q, int r)
{
     return (p + q + r);
}

int y(int &p, int &q, int &r)
{
     return (p + q + r);
}

int z(int *p, int *q, int *r)
{
     return (*p + *q + *r);
}