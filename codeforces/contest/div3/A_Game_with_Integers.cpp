#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if ((n % 3 == 0 && n % 10 != 0) || (n % 3 == 2 && n % 10 != 9))
    {
      cout << "First" << endl;
    }
    else
    {
      cout << "Second" << endl;
    }
  }
  return 0;
}
