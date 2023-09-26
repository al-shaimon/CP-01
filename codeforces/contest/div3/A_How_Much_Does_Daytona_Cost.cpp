#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }
    sort(arr, arr+n);  
    int cnt = 0;
    for(int i = 0; i < n; i++){
      if(arr[i]==k){
        cnt++;
      }
    }
    if(cnt>=1){
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }
  
  return 0;
}