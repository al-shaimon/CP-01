#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    string s;
    cin>>s;
    for(int i = 0; i < 3; i++){
      if(s[i] >= 97 && s[i] <= 122){
        s[i] = s[i] - 32;
      }
    }
    if (s=="YES" || s=="yes")
    {
      cout<<"YES"<<endl;
    } 
    else
    {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}