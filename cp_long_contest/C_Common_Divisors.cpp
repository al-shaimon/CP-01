#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  long long gcd = a[0];
  for (int i = 1; i < n; ++i)
    gcd = __gcd(gcd, a[i]);

  int cnt = 0;
  for (long long i = 1; i * i <= gcd; ++i)
  {
    if (gcd % i == 0)
    {
      cnt++;
      if (i * i != gcd)
        cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}
