#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    string s;
    char x;
    cin>>s>>x;
    int len = s.length();
    int flag = 0;
    for(int i = 0; i < len; i++){
      if(s[i]==x){
        if(i%2==0){
          flag = 1;
          break;
        }
      }
    }
    if(flag == 1){
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }
  
  return 0;
}