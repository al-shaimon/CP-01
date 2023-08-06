#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    char d;
    cin>>n>>d;
    string s;
    cin>>s;
    for(int i = 0; i < n; i++){
      if(s[i] < d){
        string ans = s.substr(0,i);
        ans += d;
        ans += s.substr(i);
        cout<<ans<<endl;
        break;
      }
    }
    string ans = s + d;
    cout<<ans<<endl;
  }
  
  return 0;
}