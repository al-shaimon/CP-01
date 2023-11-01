#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    string n;
    int x;
    cin >> n >> x;
    int remainder = 0;
    for (int i = 0; i < n.size(); i++)
    {
      remainder = (remainder * 10 + (n[i] - '0')) % x;
    }
    if (remainder == 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}