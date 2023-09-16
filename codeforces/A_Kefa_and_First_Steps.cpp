#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,cnt=0,ans=1;
  cin>>n;
  vector<int> v(n);
  for(auto &x : v){
    cin>>x;
  }
  for(int i = 0; i < n; i++){
    if(v[i]>=v[i-1]){
      cnt++;
      ans = max(ans,cnt);
    } else {
      cnt = 1;
    }
  }
  cout<<ans<<endl;
  return 0;
}