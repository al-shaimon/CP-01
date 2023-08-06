#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,x;
    cin>>n;
    int a[n];
    int total = 1+n;
    for(int i = 0; i < n; i++){
      cin>>x;
      cout<<total - x<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}