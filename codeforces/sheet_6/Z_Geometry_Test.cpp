#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    double r, s;
    cin >> r >> s;
    double circleD = 2 * r;
    double squareD = sqrt(2) * s;
    if (circleD >= squareD)
    {
      cout << "Circle";
    }
    else if (circleD <= s)
    {
      cout << "Square";
    }
    else
    {
      cout << "Complex";
    }
  }

  return 0;
}