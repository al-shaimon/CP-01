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
    vector<int> v;
    for(int i = 0; i < n; i++){
      int x;
      cin>>x;
      v.push_back(x);
    }

    if(n==1){
      cout<<0<<endl;
      continue;
    }
    int ans = v[n-1]-v[0];
    for(int i = 1; i <= n-1; i++){
      ans = max(ans,v[i]-v[0]);
    }
    for(int i = 0; i <= n-2; i++){
      ans = max(ans,v[n-1]-v[i]);
    }
    for(int i = 1; i <= n-1; i++){
      ans = max(ans,v[i-1]-v[i]);
    }

    cout<<ans<<endl;
  }
  
  return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int t;
//   cin>>t;
//   while (t--)
//   {
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i = 1; i <= n; i++){
//       int x;
//       cin>>x;
//       v.push_back(x);
//     }

//     sort(v.begin()+1, v.end());
    
//     cout<<v.back()-v[0]<<endl;
    
//   }
  
//   return 0;
// }