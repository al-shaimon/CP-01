#include <bits/stdc++.h>
using namespace std;

void printPyramid(int n, int i = 0)
{
  if (i == n)
  {
    return;
  }
  cout << string(n - i - 1, ' ') << string(2 * i + 1, '*') << endl;
  printPyramid(n, i + 1);
}

int main()
{
  int n;
  cin >> n;
  printPyramid(n);
  return 0;
}