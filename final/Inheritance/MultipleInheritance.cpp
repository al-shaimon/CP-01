// Multiple inheritance
#include <bits/stdc++.h>
using namespace std;
// first base class
class Vehicle
{
public:
  Vehicle()
  {
    cout << "This is a Vehicle\n";
  }
};
// second base class
class FourWheeler
{
public:
  FourWheeler()
  {
    cout << "This is a 4 wheeler Vehicle\n";
  }
};
// sub class derived from two base classes
class Car : public Vehicle, public FourWheeler
{
public:
  Car()
  {
    cout << "This is car\n";
  }
};
int main()
{
  Car obj;
  return 0;
}

// Output:
// This is a Vehicle
// This is a 4 wheeler Vehicle
// This is car