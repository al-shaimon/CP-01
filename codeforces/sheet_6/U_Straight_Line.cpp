#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ((y2 - y1) * (x3 - x1) == (y3 - y1) * (x2 - x1))
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