// Write a program to print the volume of a box by creating a class named 'Volume' with
// an initialization list to initialize its length, breadth and height. (Just to make you familiar
// with initialization lists)

#include <bits/stdc++.h>
using namespace std;

class Volume
{
public:
  int length;
  int breadth;
  int height;

  // Volume(int length, int breadth, int height) : length(length), breadth(breadth), height(height) {}
  Volume(int length, int breadth, int height)
  {
    this->length = length;
    this->breadth = breadth;
    this->height = height;
  }

  int calculateVolume()
  {
    return length * breadth * height;
  }

  void printVolume()
  {
    cout << "The volume of the box is: " << calculateVolume() << endl;
  }
};

int main()
{
  Volume box(5, 4, 3);

  box.printVolume();

  return 0;
}
