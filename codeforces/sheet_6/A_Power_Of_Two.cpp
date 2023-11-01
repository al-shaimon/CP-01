#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  //cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    while (n>1)
    {
      if(n%2!=0){
        cout<<"NO";
        return 0;
      }
      n = n/2;
    }
    cout<<"YES";
  }

  return 0;
}