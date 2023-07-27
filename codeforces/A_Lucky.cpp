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
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
      sum1+=str[i];
    }  

    for (int i = 3; i < 6; i++)
    {
      sum2+=str[i];
    }
    if (sum1!=sum2)
    {
      cout<<"NO"<<endl;
    } else
    {
      cout<<"YES"<<endl;
    } 
  }
  
  return 0;
}