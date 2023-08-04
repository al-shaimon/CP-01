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
    for(int i = 0; i < n; i++){
      cin>>v[i];
    }
    int flag = 0;
    for(int i = 1; i <= n; i++){
      if(v[0]==1){
        flag = 1;
        break;
      }
    }
    if(flag==1){
      cout<<"Yes"<<endl;
    } else{
      cout<<"No"<<endl;
    }
  }
  
  return 0;
}