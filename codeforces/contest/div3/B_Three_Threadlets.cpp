#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    vector<long long> a(3);
    for (int i = 0; i < 3; i++)
      cin >> a[i];
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    if (sum % 3 == 0 && *max_element(a.begin(), a.end()) <= sum / 3)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  return 0;
}
