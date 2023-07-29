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
    int len = s.length();
    int count = 0;
    if(len%2 == 0 && len > 2){
      for(int i = 1; i < len/2;i++){
        if(s[i]!=s[i-1]){
          count++;
          break;
        }
      }
    }

    else if (len%2 != 0 && len > 3){
      for(int i = 1; i < len/2; i++){
        if(s[i]!=s[i-1]){
          count++;
          break;
        }
      }
    }

    if(count){
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }
  
  return 0;
}