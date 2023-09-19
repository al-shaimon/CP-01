//  Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5
//  units by creating a class named 'Triangle' with the constructor having the three sides as
// its parameters.

#include <bits/stdc++.h>
// #include <math.h> //required if we do not use the above header file
using namespace std;

class Triangle
{
public:
  double a, b, c;

  Triangle(double a, double b, double c)
  {
    this->a = a;
    this->b = b;
    this->c = c;
  }

  void printAreaPerimeter()
  {
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    double perimeter = a + b + c;

    cout << "Area of the Triangle is: " << area << endl;
    cout << "Perimeter of the Triangle is: " << perimeter << endl;
  }
};

int main()
{
  Triangle triangle(3, 4, 5);
  triangle.printAreaPerimeter();
  return 0;
}