#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  vector<int> v;
  cin>>s;
  int len = s.size();
  if(len==1){
    cout<<s<<endl;
  } else {
    for(int i = 0; i < s.size(); i++){
      if(s[i]!='+'){
        v.push_back(s[i]);
      }
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size()-1; i++){
      cout<<v[i]-48<<"+";
    } cout<<v[v.size()-1]-48<<endl;
  }
  return 0;
}