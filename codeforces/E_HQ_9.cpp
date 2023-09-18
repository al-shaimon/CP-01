#include <bits/stdc++.h>
using namespace std;

int main()
{
  string p;
  cin>>p;
  int len = p.size();
  for(int i = 0; i < len; i++){
    if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9' || p[i] == '+'){
      cout<<"YES"<<endl;
      break;
    } else {
      cout<<"NO"<<endl;
      break;
    }
  }
  return 0;
}