#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int number;
    for (int i = 0; i < n; i++)
    {
      int number = 1;
      for (int j = 0; j <= i; j++)
      {
        cout << number << " ";
        number = number * (i - j) / (j + 1);
      }
      cout << endl;
    }
  }

  return 0;
}