#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--) {
    int x,y,r;
    cin>>x>>y>>r;
    if (r != 0)
    {
      x = x + r/30;
    }


    if (x % y != 0)
    {
      int c = x / y;
 
      cout<<c+1<<endl;
    }
    else
    {
      int c = x/y;
      cout<<c<<endl;
    }
    
    
  }
  return 0;
}