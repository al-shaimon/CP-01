#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
    cin>>n>>k;
    int p[n];
    int count = 0;
    for(int i=1;i<=n;i++){
      cin>>p[i];
    }

    for(int i=1;i<=k;i++){
      if(p[i] > k){
        count++;
      }
    }

    cout<<count<<endl;
  }
  
  return 0;
}