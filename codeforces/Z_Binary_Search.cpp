#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, f;
  cin >> n >> f;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  while (f--)
  {
    int x;
    cin >> x;
    if (binary_search(arr, arr + n, x))
    {
      cout << "found" << endl;
    }
    else
    {
      cout << "not found" << endl;
    }
  }

  return 0;
}