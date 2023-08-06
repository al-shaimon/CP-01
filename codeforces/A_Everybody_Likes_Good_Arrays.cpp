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
    vector<long long> v(n);
    for(int i = 0; i < n; i++) {
      cin>>v[i];
      if(v[i] % 2 == 0){
        v[i] = 0;
      } else {
        v[i] = 1;
      }
    }

    int cnt = 0;
    for(int i = 0; i < n-1; i++){
      if(v[i+1] - v[i] == 0){
        cnt++;
      }
    }
    cout<<cnt<<endl;
  }
  
  return 0;
}