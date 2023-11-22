#include <iostream>
using namespace std;
class Shape
{
public:
  virtual void draw() = 0; // pure virtual function
};
class Circle : public Shape
{
public:
  void draw()
  {
    // draw circle
  }
};
class Rectangle : public Shape
{
public:
  void draw()
  {
    // draw rectangle
  }
};
int main()
{
  Circle c;
  Rectangle r;
  Shape *ptr;
  ptr = &c;    // assign pointer to Circle object
  ptr->draw(); // call draw() on Circle object
  ptr = &r;    // assign pointer to Rectangle object
  ptr->draw(); // call draw() on Rectangle object
  return 0;
}