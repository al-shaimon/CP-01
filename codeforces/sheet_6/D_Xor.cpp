#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    long long a, b, q;
    cin >> a >> b >> q;
    long long res = q % 3;
    if (res == 1)
    {
      cout << a;
    }
    else if (res == 2)
    {
      cout << b;
    }
    else
    {
      cout << (a ^ b) << endl;
    }
  }

  return 0;
}