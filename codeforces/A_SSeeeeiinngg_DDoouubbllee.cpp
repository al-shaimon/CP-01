#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    string str;
    cin>>str;
    string rev = str;
    reverse(rev.begin(),rev.end());
    cout<<str + rev<<endl;
  }
  
  return 0;
}