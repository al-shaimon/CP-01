#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,ans,two = 0,cnt = 0,flag = 0;
    cin>>n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++){
      cin>>v[i];
      if(v[i]==2){
        two++;
      }
    }
    for(int i = 1; i <= n; i++){
      if(v[i]==2){
        cnt++;
      }
      if(cnt==two-cnt){
        ans=i;
        flag=1;
        break;
      }
    }
    if(flag==1) cout<<ans<<endl;
    else cout<<-1<<endl;
  }
  
  return 0;
}