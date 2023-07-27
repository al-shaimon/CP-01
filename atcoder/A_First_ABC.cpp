#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string str;
  cin>>n>>str;
  int A = 0, B = 0, C = 0;
  for (int i = 0; i < n; i++)
  {
    if(str[i]=='A'){
      A++;
    } else if (str[i]=='B') 
    {
      B++;
    } else if (str[i]=='C')
    {
      C++;
    }

    if (A > 0 && B > 0 && C > 0)
    {
      cout<<i+1<<endl;
      break;
    }
    
  }
  
  return 0;
}