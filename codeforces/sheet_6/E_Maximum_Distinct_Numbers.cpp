#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    long long n, i, cnt = 0;
    cin >> n;
    for (i = 1; cnt + i <= n; i++)
    {
      cnt += i;
    }
    cout << i - 1 << endl;
  }

  return 0;
}