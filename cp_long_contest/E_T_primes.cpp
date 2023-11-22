#include <bits/stdc++.h>
using namespace std;

int main()
{
  const int MAX = 1e6 + 5;
  bool prime[MAX];
  memset(prime, true, sizeof(prime));
  prime[0] = prime[1] = false;
  for (int i = 2; i * i < MAX; ++i)
  {
    if (prime[i])
    {
      for (int j = i * i; j < MAX; j += i)
        prime[j] = false;
    }
  }

  int n;
  cin >> n;
  while (n--)
  {
    long long x;
    cin >> x;
    long long sq = sqrt(x);
    if (sq * sq == x && prime[sq])
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
