#include <bits/stdc++.h>
using namespace std;

void printEvenIndices(vector<int> &a, int i)
{
  if (i < 0)
  {
    return;
  }
  if (i % 2 == 0)
  {
    cout << a[i] << " ";
  }
  printEvenIndices(a, i - 1);
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  printEvenIndices(a, n - 1);
  cout << endl;
  return 0;
}
