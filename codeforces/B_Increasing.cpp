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
    long long arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }

    sort(arr, arr+n);
    int flag;
    for (int i = 0; i < n-1; i++)
    {
      if (arr[i] < arr[i+1])    
      {
        flag = 1;
      } else
      {
        flag = 0;
        break;
      }

    }
    
    if (flag == 1 || n == 1)
    {
      cout<<"YES"<<endl;
    } else
    {
      cout<<"NO"<<endl;
    }
  }
    
  return 0;
}