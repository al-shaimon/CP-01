// Overload ++ when used as prefix
#include <iostream>
using namespace std;
class Count
{
private:
  int value;

public:
  Count()
  {
    value = 5;
  }
  // Overload ++ when used as prefix
  Count operator++()
  {
    ++value;
  }
  void display()
  {
    cout << "Count: " << value << endl;
  }
};
int main()
{
  Count count1;
  // Call the "void operator ++ ()" function
  ++count1;
  count1.display();
  return 0;
}