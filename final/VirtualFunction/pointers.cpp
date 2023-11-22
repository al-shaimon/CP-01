#include <iostream >
using namespace std;
class base
{
  int x;

public:
  void setX(int i)
  {
    x = i;
  }
  int getX()
  {
    return x;
  }
};
class derived : public base
{
  int y;

public:
  void setY(int i)
  {
    y = i;
  }
  int getY()
  {
    return y;
  }
};
int main()
{
  base *p;      // pointer to base type
  base b_ob;    // object of base
  derived d_ob; // object of derived
  // use p to access base object
  p = &b_ob;
  p->setX(10); // access base object. -> This syntax is commonly used in object- oriented programming languages like C++ to access member functions and variables of an object through a pointer to that object.
  cout << " Base object x: " << p->getX() << '\n';
  // use p to access derived object
  p = &d_ob;   // point to derived object
  p->setX(99); // access derived object
  // can ’t use p to set y, so do it directly
  d_ob.setY(88);
  cout << "Derived object x: " << p->getX() << '\n';
  cout << "Derived object y: " << d_ob.getY() << '\n';
  return 0;
}

// Output:
// Base object x: 10
// Derived object x: 99
// Derived object y: 88