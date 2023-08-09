// C++ program for && Operator overloading

#include <iostream>
using namespace std;
class A
{
private:
  int value;

public:
  // Non-parameterized constructor
  A() {}
  // parameterized constructor
  A(int l) { value = l; }

  // This is automatically called
  // when '&&' operator is
  // used between a1 and a2.
  A operator&&(const A &a)
  {
    A obj;
    obj.value = value && a.value;
    return obj;
  }

  // method to display result
  void result()
  {
    if (value)
      cout << "Both value is non zero" << endl;
    else
      cout << "Any one or both value is equal to zero"
           << endl;
  }
};

// Driver Code
int main()
{
  // Assigning by overloading constructor
  A a1(95), a2(78);
  A a3;

  // overloading && operator and storing the result in a3
  // a3=a1.&&(a2);
  a3 = a1 && a2;
  a3.result();
  return 0;
}
