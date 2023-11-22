// (/) Operator Overloading
#include <iostream>
using namespace std;
class Weight
{
private:
  int kilo;

public:
  Weight()
  {
    kilo = 25;
  }
  Weight(int k)
  {
    kilo = k;
  }
  Weight operator/(const Weight &obj)
  {
    int total;
    total = kilo / obj.kilo;
    cout << "Total: " << total << endl;
  }
};
int main()
{
  Weight w1, w2(5);
  Weight w3;
  w3 = w1 / w2;
  return 0;
}

// Output:
// Total: 5