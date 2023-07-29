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
    int a[n];
    for(int i=0; i<n;i++){
      cin>>a[i];
    }

    int n2 = 10 - n;

    int pass = ((n2*(n2-1))/2)*6;

    cout<<pass<<endl;
  }
  
  return 0;
}