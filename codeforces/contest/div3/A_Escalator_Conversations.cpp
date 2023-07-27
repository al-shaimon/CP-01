#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,m,k,H;
    cin>>n>>m>>k>>H;
    int h[n];

    int stepDif = (m*k)-k;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
      cin>>h[i];

      int heightDiff = abs(H-h[i]);

      if (heightDiff % k == 0 && heightDiff <= stepDif && heightDiff != 0)  
      {
        count++;
      } 
      
    }
    cout<<count<<endl;
  }
  
  return 0;
}