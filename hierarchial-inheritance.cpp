//Write a program to show hierarchial inheritance.

#include <iostream>
using namespace std;
class shape
{
protected:
     float width, height;

public:
     void setDimension(float w, float h)
     {
          cout << "The dimensions are :" << w << " and " << h << "\n";
          width = w;
          height = h;
     }
};

class rectangle : public shape
{
public:
     float area()
     {
          return (width * height);
     }
};

class triangle : public shape
{
public:
     float area()
     {
          return (width * height / 2);
     }
};

// Defining the main fuction

int main()
{
     rectangle Rectangle;
     triangle Triangle;

     Rectangle.setDimension(5, 3);
     Triangle.setDimension(2, 5);

     cout << "Area of Rectangle using Rectangle Class : " << Rectangle.area() << "\n";
     cout << "Area of Triangle using Triangle Class : " << Triangle.area() << "\n";

     return 0;
}
