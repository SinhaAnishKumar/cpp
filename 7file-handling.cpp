//Write a program to open a file in reading and writing mode.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
     ofstream myfile("Test.txt");
     if(myfile.is_open())
     {
          myfile << "Hi There, I'm Anish Kumar Sinha!" <<endl; 
     }
     else
     {
          cout << "Something Went Wrong!";
     }
     myfile.close();
}