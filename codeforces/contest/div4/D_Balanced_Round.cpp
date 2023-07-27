#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    sort(arr,arr+n);
    long long count = 0;
    for (long long i = 0; i < n; i++)
    {
      if((abs(arr[i] - arr[i+1]) <= k)){
        count++;
      }
    }
    cout<<count<<endl;
  }
  
  return 0;
}