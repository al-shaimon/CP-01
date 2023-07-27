#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    long long arr[n];
    long long sorted[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
      sorted[i] = arr[i];
    }
    sort(sorted,sorted+n);
    for (int i = 0; i < n; i++)
    {
      if (arr[i] < sorted[n-1])
      {
        cout<<arr[i] - sorted[n-1]<<" ";
      } else
      {
        cout<<arr[i] - sorted[n-2]<<" "; 
      } 
    }
    cout<<endl;
  }
  
  return 0;
}