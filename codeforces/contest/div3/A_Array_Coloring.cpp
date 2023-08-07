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
    for (auto &x :v){
      cin>>x;
      
    }
    sort(v.begin(),v.end());
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n/2; i++){
      sum1+=v[i];
    }

    for(int i = n/2; i < n; i++){
      sum2+=v[i];
    }
    if((sum1%2==0 && sum2%2==0) || (sum1%2!=0 && sum2%2!=0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  
  return 0;
}