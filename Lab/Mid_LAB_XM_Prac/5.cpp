// Write a program to print the area of two rectangles having sides (4, 5) and (5, 8)
// respectively by creating a class named 'Rectangle' with a function named 'Area' which
// returns the area. Length and breadth are passed as parameters to its constructor

#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
  int a, b;

  Rectangle(int a, int b)
  {
    this->a = a;
    this->b = b;
  }
  int area()
  {
    return a * b;
  }
};

int main()
{
  Rectangle rectangle1(4, 5);
  Rectangle rectangle2(5, 8);

  cout << "Area of Rectangle 1 is: " << rectangle1.area() << endl;
  cout << "Area of Rectangle 2 is: " << rectangle2.area() << endl;

  return 0;
}