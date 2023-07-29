#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,i,j;
    cin>>n;
    int p[n];
    int count = 0;
    for(i=1;i<=n;i++){
      cin>>p[i];
      if(p[i]==i){
        count++;
      }
    }
    if(count%2!=0){
      count = count+1;
    }
    
    cout<<(count/2)<<endl;
  }
  
  return 0;
}

