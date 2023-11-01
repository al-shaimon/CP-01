#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    long long a, b, g = 0, l = 0;
    cin >> a >> b;
    g = gcd(a, b);
    l = lcm(a, b);
    cout << g << " " << l << endl;
  }

  return 0;
}