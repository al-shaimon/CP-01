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
//     int a[n];
//     int m[n];

//     for(int i = 0; i <= n; i++){
//       m[i] = 0;
//     }

//     int ans = 0, count = 0;

//     for(int i = 0; i < n; i++){
//       cin>>a[i];
//       if (m[a[i]] == 0)
//       {
//         count++;
//         m[a[i]] = 1;
//       } else
//       {
//         count--;
//         m[a[i]] = 0;
//       }
      
//       if(count > ans){
//         ans = count;
//       }
//     }

//     cout<<ans<<endl;
//   }
  
//   return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int m[n];
//         for (int i = 0; i <= n; i++) m[i] = 0;
//         int ans = 0, cnt = 0;
//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             if (m[x] == 0) {
//                 cnt++;
//                 m[x] = 1;
//             } else {
//                 cnt--;
//                 m[x] = 0;
//             }
//             if (cnt > ans) ans = cnt;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m[n + 1] = {0};
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (m[x] == 0) {
                cnt++;
                m[x] = 1;
            } else {
                cnt--;
                m[x] = 0;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         unordered_map<int, int> m;
//         int ans = 0, cnt = 0;
//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             if (m[x] == 0) {
//                 cnt++;
//                 m[x] = 1;
//             } else {
//                 cnt--;
//                 m[x] = 0;
//             }
//             ans = max(ans, cnt);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

