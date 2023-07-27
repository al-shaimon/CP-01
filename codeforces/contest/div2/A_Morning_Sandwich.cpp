#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int b,c,h,count=0;
    cin>>b>>c>>h;
    int ans;
    if(b > c+h ){
      ans = (c+h) + (c+h) + 1;
    } else {
      ans = b + (b-1);
    }
    cout<<ans<<endl;
  }
  return 0;
}


