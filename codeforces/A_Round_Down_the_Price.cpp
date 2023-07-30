#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int m;
    cin>>m;
    int x = 1;
    while (x*10<=m)
    {
      x*=10;
    }
    cout<<m-x<<endl;
  }
  
  return 0;
}