#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int x;
    cin>>x;
    int a[x+1];
    for(int i = 1; i <= 3; i++){
      cin>>a[i];
    }
    if(a[x] != 0 && a[a[x]] != 0){
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }
  
  return 0;
}