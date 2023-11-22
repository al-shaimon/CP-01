#include <bits/stdc++.h>
using namespace std;

void printInvertedPyramid(int n, int i = 0)
{
  if (i == n)
  {
    return;
  }
  cout << string(i, ' ') << string(2 * (n - i) - 1, '*') << endl;
  printInvertedPyramid(n, i + 1);
}

int main()
{
  int n;
  cin >> n;
  printInvertedPyramid(n);
  return 0;
}