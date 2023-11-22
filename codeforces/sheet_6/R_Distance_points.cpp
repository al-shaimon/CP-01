#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double res = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
    cout << fixed << setprecision(9) << res << endl;
  }

  return 0;
}