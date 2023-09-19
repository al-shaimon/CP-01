// Write a program to print the area of a rectangle by creating a class named 'Area' taking
// the values of its length and breadth as parameters of its constructor and having a
// function named 'returnArea' which returns the area of the rectangle. Length and breadth
// of the rectangle are entered through keyboard.

#include <bits/stdc++.h>
using namespace std;

class Area
{
public:
  int length, breadth;

  Area(int length, int breadth)
  {
    this->length = length;
    this->breadth = breadth;
  }

  int returnArea()
  {
    return length * breadth;
  }
};

int main()
{
  int length, breadth;

  cout << "Enter the length of the Rectangle: ";
  cin >> length;
  cout << "Enter the breath of the Rectangle: ";
  cin >> breadth;

  Area area(length, breadth);
  cout << "Area of the Rectangle is: " << area.returnArea() << endl;

  return 0;
}