#include <bits/stdc++.h>
using namespace std;

long long fact(int n)
{
  long long fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    long long ncr = fact(a) / (fact(b) * fact(a - b));
    long long npr = fact(a) / fact(a - b);
    cout << ncr << " " << npr << endl;
  }

  return 0;
}