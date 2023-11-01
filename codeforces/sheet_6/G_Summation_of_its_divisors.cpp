#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    long long n, sum = 0;
    cin >> n;
    for (long long i = 1; i * i <= n; i++)
    {
      if (n % i == 0)
      {
        if (i == (n / i))
        {
          sum += i;
        }
        else
        {
          sum += i + (n / i);
        }
      }
    }
    cout << sum << endl;
  }

  return 0;
}
