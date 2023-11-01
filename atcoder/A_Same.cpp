#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    int n,cnt=1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
      if(arr[i]==arr[i+1]){
        cnt++;
      }
    }
    if(cnt==n){
      cout<<"Yes\n";
    } else{
      cout<<"No\n";
    }
  }

  return 0;
}