#include <iostream>
using namespace std;
class B
{
public:
  virtual void s() = 0; // Pure Virtual Function
};
class D : public B
{
public:
  void s()
  {
    cout << "Virtual Function in Derived class\n";
  }
};
int main()
{
  B *b;
  D d_obj;
  b = &d_obj;
  b->s();
}

// Output:
// Virtual Function in Derived class