#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n, a, b, c;
  cin >> n >> a >> b >> c;
  vector<vector<ll>> d(n, vector<ll>(n));
  for (ll i = 0; i < n; i++)
  {
    for (ll j = 0; j < n; j++)
    {
      cin >> d[i][j];
    }
  }
  vector<vector<ll>> dp(n, vector<ll>(n, INF));
  dp[0][0] = 0;
  for (ll i = 1; i < n; i++)
  {
    for (ll j = 0; j < i; j++)
    {
      dp[i][j] = min(dp[i][j], dp[i - 1][j] + d[i - 1][i] * a);
      dp[i][i - 1] = min(dp[i][i - 1], dp[i - 1][j] + d[j][i] * a + c);
    }
  }
  ll ans = INF;
  for (ll i = 0; i < n; i++)
  {
    ans = min(ans, dp[n - 1][i] + d[i][n - 1] * a);
  }
  cout << ans << "\n";
  return 0;
}
