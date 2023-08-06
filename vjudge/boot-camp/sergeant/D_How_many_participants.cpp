#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
  int cnt = 0;
  for(int i = 0; i < n; i++){
    cin>>v[i];
    if(v[i] >= v[k-1] && v[i] > 0){
      cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}