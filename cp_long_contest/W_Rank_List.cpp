#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> teams(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> teams[i].first >> teams[i].second;
    teams[i].first *= -1;
  }
  sort(teams.begin(), teams.end());
  pair<int, int> kth_team = teams[k - 1];
  int count = 0;
  for (const auto &team : teams)
  {
    if (team == kth_team)
      count++;
  }
  cout << count << endl;
  return 0;
}
