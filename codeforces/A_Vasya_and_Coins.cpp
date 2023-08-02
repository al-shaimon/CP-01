#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int a,b;
    cin>>a>>b;
    if(a>0){
      int ans = a+2*b+1;
      cout<<ans<<endl;
    } else {
      cout<<1<<endl;
    }
  }
  
  return 0;
}