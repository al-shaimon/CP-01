#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m = INT_MAX,ans;
  cin>>n;
  vector<int> v;
  for(int i = 0; i < n ;i++){
    int x;
    cin>>x;
    v.push_back(x);
    if(x < m){
      m = x;
      ans = i;
    }
  }
  
  sort(v.begin(),v.end());
  if(v[0]==v[1]){
    cout<<"Still Rozdil";
  } else{
    cout<<ans+1;
  }
  return 0;
}