#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
      cout << ans << " ";
      ans += 2;
    }
    cout << endl;
  }

  return 0;
}
