#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int k;
    cin>>k;
    vector<int> v;
    for(int i = 1; v.size() < k;i++){
      if(i % 3 != 0 && i % 10 != 3){
        v.push_back(i);
      }
    }
    cout<<v[k-1]<<endl;
  }
  
  return 0;
}

