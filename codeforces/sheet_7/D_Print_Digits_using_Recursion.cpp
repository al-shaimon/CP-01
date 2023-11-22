#include <bits/stdc++.h>
using namespace std;

void print(string n, int i = 0)
{
  if (i == n.size())
  {
    return;
  }
  cout << n[i] << " ";
  print(n, i + 1);
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string n;
    cin >> n;
    print(n);
    cout << endl;
  }
}
