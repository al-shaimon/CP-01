// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int n,n2;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//       cin >> arr[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//       cout<<i<<" ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

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
    vector<pair<int,int>>v;
    for(int i = 0; i < n; i++){
      int x;
      cin>>x;
      v.push_back({x,i});
    }

    sort(v.begin(),v.end());
    int p = n;
    for(int i = 0; i < n; i++){
      v[i].first = p;
      p--;
    }

    int ans[n];
    for(int i = 0; i < n; i++){
      ans[v[i].second] = v[i].first;
      // cout<<v[i].first<<" ";
    }

    for(int i = 0; i < n; i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}