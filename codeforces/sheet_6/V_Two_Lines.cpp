#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    long long x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    long long X1 = x2 - x1;
    long long X2 = x4 - x3;
    long long Y1 = y2 - y1;
    long long Y2 = y4 - y3;
    if (X1 * Y2 == X2 * Y1)
    {
      cout << "YES";
    }
    else
    {
      cout << "NO";
    }
  }

  return 0;
}