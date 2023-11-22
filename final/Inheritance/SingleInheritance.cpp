// // C++ program to explain Single inheritance
// #include <iostream>
// using namespace std;
// // base class
// class Vehicle
// {
// public:
//   Vehicle()
//   {
//     cout << "This is a Vehicle\n";
//   }
// };
// // sub class derived from a single base classes
// class Car : public Vehicle
// {
//   // body of this class
// };
// int main()
// {
//   Car obj;
//   return 0;
// }
// // Output
// // This is a Vehicle

// Single inheritance

#include <bits/stdc++.h>
using namespace std;
// base class
class Vehicle
{
public:
  Vehicle()
  {
    cout << "This is a Vehicle\n";
  }
};
// sub class derived from a single base classes
class Car : public Vehicle
{
  // body of this class
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