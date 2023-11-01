#include <bits/stdc++.h>
using namespace std;

int main()
{
  string x;
  getline(cin, x);
  int len = x.size(), cnt = 1, s;
  for (int i = 0; i < len; i++)
  {
    if (x[i] >= 'A' && x[i] <= 'z')
    {
      s = i;
      break;
    }
  }
  for (int i = s; i < len; i++)
  {
    if (!(x[i] >= 'A' && x[i] <= 'z') && x[i + 1] >= 'A' && x[i + 1] <= 'z')
      cnt++;
    else
      continue;
  }
  cout << cnt << endl;
}