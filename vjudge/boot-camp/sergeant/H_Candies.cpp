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
    vector<int> v;
    for(int i = 0; i < n; i++){
      int x;
      cin>>x;
      v.push_back(x);
    }

    sort(v.rbegin(), v.rend());
    
    int sum = 0;
    for(int i = 0; i < n; i++){
      sum += (v[i]-v.back());
    }
    cout<<sum<<endl;
  }
  
  return 0;
}