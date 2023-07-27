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
    string str;
    cin>>str;
    char ch = 'a';
    for (int i = 0; i < n; i++)
    {
      if (str[i]>ch)
      {
        ch = str[i];
      }
    }

    int count = ch - 96;
    cout<<count<<endl;
  }
  
  return 0;
}