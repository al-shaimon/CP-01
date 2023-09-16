#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    ans=((abs(a-b)+1)/2+c-1)/c;
    cout<<ans<<endl;
  }

  return 0;
}

