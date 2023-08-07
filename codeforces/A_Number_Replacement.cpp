#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    
    vector<int> v(n);
    vector<int> b(n);

    for(auto &u : v){
      cin>>u;
    }

    string s,y;
    cin>>s;

    for(int i = 0; i < s.size(); i++){
      for(int j = 0; j < v.size(); j++){
        if(v[i] == v[j] && b[j] == 0){
          b[j] = s[i];
        }
      }
    }

    for(int i = 0; i < b.size(); i++){
      y+=(char)b[i];
    }

    if(y==s) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  
  return 0;
}