#include <iostream>
using namespace std;

void printNumbers(int n, int i = 1)
{
  if (i > n)
  {
    return;
  }
  cout << i << endl;
  printNumbers(n, i + 1);
}

int main()
{
  int n;
  cin >> n;
  printNumbers(n);
  return 0;
}
