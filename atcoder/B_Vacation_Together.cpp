#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,d;
  cin>>n>>d;
  string str[n];
  for (int i = 0; i < n; i++)
  {
    cin>>str[i];
  }

  int count = 0;
  
  for (int i = 0; i < n; i++)
  {
    int check = 1;
    for (int j = 0; j < d; j++)
    {
      if (str[i][j]=='x')
      {
        check=-1;
        break;
      }
      if(check == 1){
        count++;
      } else
      {
        count = 0;
      }
    }
  }
  cout<<count<<endl;  

  return 0;
}