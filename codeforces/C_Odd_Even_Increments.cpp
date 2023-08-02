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
    int a[n];
    int flag = 1;
    for(int i = 0; i < n; i++){
      cin>>a[i];
    }
    for(int i = 0; i < n; i++){ 
      if(i-2>-1 && a[i]%2!=a[i-2]%2){
        flag = 0;
        break;
      }
    }
    if(flag==1){
      cout<<"YES"<<endl;  
    } else {
      cout<<"NO"<<endl;
    }
  }
  
  return 0;
}