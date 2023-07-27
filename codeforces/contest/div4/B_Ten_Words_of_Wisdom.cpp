#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    int quantity = -1,count = -1;
    cin>>n;
    for(int i = 1; i <= n; i++){
      int a,b;
      cin>>a>>b;
      if(a <= 10 && b > quantity){
        quantity = b;
        count = i;
      }
    }
    cout<<count<<endl;
  }
  
  return 0;
}