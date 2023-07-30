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
    int odd = 0;
    int even = 0;
    for(int i = 1; i <= n; i++){
      cin>>a[i];
      if(a[i]%2==0){
        even++;
      } else {
        odd++;
      }
    }
    
    cout<<min(even,odd)<<endl;
  }
  
  return 0;
}