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
    long long count = 0;
    for(int i=1;i<=n;i++){
      cin>>a[i];
      count+=a[i];
    }
    cout<<abs(count)<<endl;
  }
  
  return 0;
}