#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }
    int ans = 0;
    int freq[101] = {0};

    for(int i = 0; i < n; i++){
      freq[arr[i]]++;
    }


    for(int i = 1; i <= 100; i++){
      ans+=min(freq[i],c);
    }
    cout<<ans<<endl;
  }
  
  return 0;
}