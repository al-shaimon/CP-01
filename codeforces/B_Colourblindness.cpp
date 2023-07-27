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
    string x,y;
    cin>>x>>y;
    for(int i = 0; i < n; i++){
      if(x[i] == 'G'){
        x[i] = 'B';
      }
      if(y[i] == 'G'){
        y[i] = 'B';
      }
    }

    int count = 0;
    for(int i = 0; i < n; i++){
      if(x[i] == y[i]){
        count++;
      }
    }
    if (count == n){
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
    
  }
  
  return 0;
}