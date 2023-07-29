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
    int arr[n];
    if(n%2 != 0){
      for(int i = 1; i < n; i++){
        cout<<i<<" ";
      }
      cout<<n<<endl;
    } else {
      for(int i = 1; i < n; i++){
        cout<<(i+i)<<" ";
      }
      cout<<(n+n)<<endl;
    }
  }
  
  return 0;
}