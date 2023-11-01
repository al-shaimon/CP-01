#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  map<int, int> factors;
  for (int i = 2; i * i <= n; i++)
  {
    while (n % i == 0)
    {
      factors[i]++;
      n /= i;
    }
  }
  if (n > 1)
  {
    factors[n]++;
  }
  for (auto it = factors.begin(); it != factors.end(); it++)
  {
    if (it != factors.begin())
    {
      cout << "*";
    }
    cout << "(" << it->first << "^" << it->second << ")";
  }
  cout << endl;

  return 0;
}