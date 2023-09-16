#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,a,b;
  cin>>n>>a>>b;
  if(n==1){
    if(a==b){
      cout<<1<<endl<<a<<":"<<b<<endl;
    } else {
      cout<<0<<endl<<a<<":"<<b<<endl;
    }
    return 0;
  } 
  
  vector<pair<int,int>> v(n+1);
  for(int i = 1; i <= n; i++){
    v[i].first=0;
    v[i].second=0;
  }
  int draw  = 0;
  for(int i = 1;i <= n;i++){
    if(a>0){
      a--;
      v[i].first++;
    } else {
      break;
    }
  } 
  if(b){
    if()
  }
  return 0;
}