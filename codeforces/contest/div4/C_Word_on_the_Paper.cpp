#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    string str[8];
    for (int i = 0; i < 8; i++)
    {
      cin>>str[i];
    }

    string charCount;
    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        if(str[i][j] != '.'){
          charCount+=str[i][j];
        }
      }
    }
    cout<<charCount<<endl;    
  }
  
  return 0;
}