#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    long long x;
    cin >> n >> k >> x;
    long long sum1 = (long long)k*(k+1)/2;
    long long sum2 = (long long)n*(n+1)/2 - (long long)(n-k)*(n-k+1)/2; 

    if(sum1 > x || sum2 < x){
      cout<<"NO"<<endl;
    } else {
      cout<<"YES"<<endl;
    }
  }

  return 0;
}
