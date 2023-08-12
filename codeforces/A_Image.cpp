#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    string a,b,x;
    cin>>a>>b;
    int cnt = -1;
    x = a + b;
    sort(x.begin(), x.end());
    for(int i = 0; i < x.size(); i++){
      if(x[i]!=x[i+1]) cnt++;
    }
    cout<<cnt<<endl;
  }
  
  return 0;
}