#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string s,ans;
  cin>>n>>s;
  int res = 0, cnt = 0;
  for(int i = 0; i < n-1; i++){
    cnt = 0;
    for(int j = 0; j < n-1; j++){
      if(s[j] == s[i] && s[j+1] == s[i+1]){
        cnt++;
      }
    }
    if(res < cnt){
      res = cnt;
      ans = string(1, s[i]) + string(1, s[i+1]);
    }
  }
  cout<<ans<<endl;
  return 0;
}