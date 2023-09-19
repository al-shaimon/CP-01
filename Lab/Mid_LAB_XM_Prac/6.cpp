// Write a program to print the area of a rectangle by creating a class named 'Area' having
// two functions. First function named as 'setDim' takes the length and breadth of the
// rectangle as parameters and the second function named as 'getArea' returns the area of
// the rectangle. Length and breadth of the rectangle are entered through keyboard.

#include <bits/stdc++.h>
using namespace std;

class Area
{
public:
  int length;
  int breadth;

  void setDim()
  {
    cout << "Enter the length of the Rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the Rectangle: ";
    cin >> breadth;
  }
  int getArea()
  {
    return length * breadth;
  }
};

int main()
{
  Area area;
  area.setDim();
  cout << "The area of the Rectangle is: " << area.getArea() << endl;
  return 0;
}