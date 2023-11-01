#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    long long a, b, x;
    cin >> a >> b >> x;
    long long ma = max(a, b);
    long long mi = min(a, b);
    long long sum_ma = ma / x * (ma / x + 1) / 2 * x;
    long long sum_mi = (mi - 1) / x * ((mi - 1) / x + 1) / 2 * x;
    cout << sum_ma - sum_mi << endl;
    return 0;
  }

  return 0;
}