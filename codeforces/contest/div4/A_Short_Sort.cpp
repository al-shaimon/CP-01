#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    string s;
    cin>>s;
    // for(int i = 1; i <= s.size(); i++){
    //   if((s[i]=='a' && s[i+1] == 'b') || s[])
    // }
    if((s[0]=='b' && s[1]=='c') || (s[0]=='c' && s[1]=='a')){
      cout<<"NO"<<endl;
    } else {
      cout<<"YES"<<endl;
    }
  }
  
  return 0;
}