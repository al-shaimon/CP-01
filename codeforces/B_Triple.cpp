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
    long long arr[n+5];
    int frequency[n+5];
    for (int i = 1; i <= n; i++)
    {
      frequency[i] = 0;
    }

    for(int i = 0;i < n;i++){
      cin>>arr[i];
      frequency[arr[i]]++;
    }

    int count = 0;
    int flag = 0;

    for (int i = 1; i <= n; i++)
    {
      if (frequency[i] >= 3)
      {
        flag = 1;
        count = i;
        break;
      }
    }
    if (flag == 1)    
    {
      cout<<count<<endl;
    } else
    {
      cout<<"-1"<<endl;
    }
    
  }
  
  return 0;
}