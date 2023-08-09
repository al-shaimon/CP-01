#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;
    int flag = 0;
    for(int i = 0; i < s.size(); i++){
      if(flag == 0){
        if((((int)s[i]) - 48) < d){
          cout<<d<<s[i];
          flag = 1;
        } else {
          cout<<s[i];
        }
      }
      else {
        cout<<s[i];
      }
    }
    if(flag == 0) cout<<d;
    cout<<endl;
  }

  return 0;
}