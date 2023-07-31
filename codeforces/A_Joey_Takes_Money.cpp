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
    long long a[n];
    long long m = 1;
    for(int i = 0; i < n; i++){
      cin>>a[i];
      m*=a[i];
    }
    m+=(n-1);
    long long ans = 2022*m;
    cout<<ans<<endl;
  }
  
  return 0;
}