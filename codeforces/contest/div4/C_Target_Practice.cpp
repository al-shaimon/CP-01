#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    vector<string> a(10);
    for (int i = 0; i < 10; i++)
    {

      cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        if (a[i][j] == 'X')
        {
          int x = min(i, 9 - i);
          int y = min(j, 9 - j);
          ans += min(x, y) + 1;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
