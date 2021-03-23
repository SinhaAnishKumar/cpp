//Write a program to print factorial of a number.

#include <iostream>

using namespace std;
unsigned long long fact (int n)
{
   if (n == 1)
   {
      return 1;
   }
   else
   {
      return n * fact(n-1);
   }
}

int main()
{
   int num;

   cout << "Enter A Number To Calculate Its Factorial  :  ";
   cin >> num;
   if (num > 65)
   {
      cout << "\nOoopss....! You Should Buy A Super Computer To Calculate Its Factorial :D\n\n\n";
   }
   else
   {
      unsigned long long factorial = fact(num);
      cout << "\nThe Factorial Of " << num << " Is " << factorial <<"\n" <<endl;
   }
   return 0;
}