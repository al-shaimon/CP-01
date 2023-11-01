#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;
  while (T--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
    }
    sort(a.begin(), a.end());
    long long x = sum / n;
    if (sum % n != 0)
      x++;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] > x)
        ans += a[i] - x;
    }
    cout << ans << "\n";
  }

  return 0;
}
