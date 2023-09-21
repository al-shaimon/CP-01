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
    for(auto &u : v){
      cin>>u;
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int first = 0, last = n-1;
    while(first < last){
      ans+=(v[last]-v[first]);
      first++,last--;
    }
    cout<<ans<<endl;
  }
  
  return 0;
}