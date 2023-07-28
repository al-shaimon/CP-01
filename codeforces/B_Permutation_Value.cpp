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
    for(int i = 2; i <= n; i++){
      cout<<i<<" ";
    }
    cout<<"1"<<endl;
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
//     int arr[n];
//     for(int i = 0; i < n; i++){
//       arr[i] = i + 1;;
//     }

//     for(int i = n - 1 ; i >= 1; i--){
//       cout<<arr[i]<<" ";
//     }
//     cout<<"1"<<endl;
//   }
  
//   return 0;
// }