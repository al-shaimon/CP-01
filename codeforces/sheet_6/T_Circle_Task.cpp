#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    long long x, y, r, n;
    cin >> x >> y >> r >> n;
    for (int i = 0; i < n; i++)
    {
      long long xi, yi;
      cin >> xi >> yi;
      long long dist = (xi - x) * (xi - x) + (yi - y) * (yi - y);
      if (dist <= r * r)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}