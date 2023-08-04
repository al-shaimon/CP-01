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
    vector<int> v(n);
    int m = 4, sum = 0;
    for(int i = 0; i < n; i++){
      cin>>v[i];
      sum+=v[i];
      if(i>0){
        m = min(m,2*v[i]+2*v[i-1]);
      }
    }
    cout<<sum-m<<endl;
  }
  
  return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
 
// const int sz = 1e5 + 10;
// int ara[sz];
 
// int main()
// {
//     int t;
//     scanf("%d", &t);
 
//     while(t--) {
//         int n;
//         scanf("%d", &n);
 
//         int sum = 0;
 
//         for(int i = 1; i <= n; i++) {
//             scanf("%d", &ara[i]);
//             sum += ara[i];
//         }
 
//         int ans = -1e9;
 
//         for(int i = 1; i < n; i++) {
//             if(ara[i] == ara[i+1]) {
//                 if(ara[i] == 1) ans = max(ans, sum-4);
//                 else ans = max(ans, sum+4);
//             }
//             else
//                 ans = max(ans, sum);
//         }
 
//         printf("%d\n", ans);
//     }
 
//     return 0;
// }

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
//     for(int i = 0; i < n; i++){
//       int x;
//       cin>>x;
//       v.push_back(x);
//     }

//     int sum = 0;
//     for(int i = 0; i < n; i++){
//       if(v[i+1]==-1 && v[i+2] == -1){
//         v[i+1]*=-1;
//         v[i+2]*=-1;
//       }
//       sum+=v[i];
//       // cout<<v[i]<<" ";
//     }
//     if(v.size()==2){
//       int newSum = -1*sum;
//       cout<<newSum<<endl;
//     } else{
//       cout<<sum<<endl;
//     }
//   }
  
//   return 0;
// }
