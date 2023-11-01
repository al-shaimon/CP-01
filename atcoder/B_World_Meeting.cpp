#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<pii> v;
  for (int i = 0; i < n; i++)
  {
    int w, x;
    cin >> w >> x;
    v.pb(mp(x, w));
  }
  sort(v.begin(), v.end());
  ll ans = 0, sum = 0;
  priority_queue<int> pq;
  for (int i = 0; i < n; i++)
  {
    while (!pq.empty() && v[i].first - pq.top() > 9)
    {
      sum -= pq.top();
      pq.pop();
    }
    pq.push(v[i].second);
    sum += v[i].second;
    ans = max(ans, sum);
  }
  cout << ans << "\n";
  return 0;
}
