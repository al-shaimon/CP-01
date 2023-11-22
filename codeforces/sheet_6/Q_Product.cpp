#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    long long l, r, m;
    cin >> l >> r >> m;
    long long ans = 1;
    long long ma = max(l, r);
    long long mi = min(l, r);
    for (int i = mi; i <= ma; i++)
    {
      ans *= i;
      ans %= m;
    }
    cout << ans << endl;
  }

  return 0;
}