#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int x,y;
    cin>>x>>y;
    if(y%x==0){
      int b = y/x;
      cout<<1<<" "<<b<<endl;
    } else {
      cout<<0<<" "<<0<<endl;
    }
  }
  
  return 0;
}