#include <iostream>
using namespace std;
void display(int x)
{
  cout << x;
}
int main()
{
  void (*ptrFunc)(int) = display; // define a function pointer type
  ptrFunc(5);
  return 0;
}

// Output:
// 5