#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int t2;
    cin >> t2;
    int min1 = 2e9, min2 = 2e9;
    long long sumOfMin2 = 0;
    while (t2--)
    {
      int n;
      cin >> n;
      vector<int> v(n);
      for (auto &x : v)
      {
        cin >> x;
      }
      sort(v.begin(), v.end());
      min1 = min(min1, v[0]);
      min2 = min(min2, v[1]);
      sumOfMin2 += v[1];
    }
    cout<<min1+sumOfMin2-min2<<endl;
  }

  return 0;
}