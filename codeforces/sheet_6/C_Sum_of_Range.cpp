#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    long long a, b;
    long long sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> a >> b;
    if (a > b)
    {
      swap(a, b);
    }
    for (long long i = a; i <= b; i++)
    {
      sum1 += i;
      if (i % 2 == 0)
      {
        sum2 += i;
      }
      else
      {
        sum3 += i;
      }
    }
    cout << sum1 << endl
         << sum2 << endl
         << sum3 << endl;
  }

  return 0;
}