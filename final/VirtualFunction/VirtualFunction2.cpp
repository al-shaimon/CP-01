#include <iostream >
using namespace std;
class sound
{
public:
  virtual void print()
  {
    cout << "Sound" << endl;
  }
};
class dog : public sound
{
  void print()
  {
    cout << "Dog Dog" << endl;
  }
};
class cat : public sound
{
  void print()
  {
    cout << "Cat Cat" << endl;
  }
};
int main()
{
  sound s;
  dog d;
  cat c;
  sound *str;
  str = &d;
  str->print();
  str = &c;
  str->print();
  return 0;
}

// Output:
// Dog Dog
// Cat Cat