#include <iostream>
using namespace std;
class base
{
  int x;

public:
  void setx(int i)
  {
    x = i;
  }
  int getx()
  {
    return x;
  }
};
class derived : public base
{
  int y;

public:
  void sety(int i)
  {
    y = i;
  }
  int gety()
  
  {
    return y;
  }
};
int main()
{
  base *p;      // pointer to base type
  base b_Ob;    // object of base
  derived d_ob; // object of derived
  // use p to access base object
  p = &b_Ob;
  p->setx(10); // access base object, -> this syntex is commonly used in object
  // - oriented programming languages like c++
  cout << "Base Object x : " << p->getx() << endl;

  return 0;
}