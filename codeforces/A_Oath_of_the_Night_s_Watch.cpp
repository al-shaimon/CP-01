#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  if (n <= 2)
  {
    cout << "0" << endl;
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    int max = arr[n - 1], min = arr[0];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] > min && arr[i] < max)
      {
        cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
