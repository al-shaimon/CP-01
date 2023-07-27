#include <bits/stdc++.h>
using namespace std;

int main()
{
  string pi = "314159265358979323846264338327950288419716939937510";
  int t;
  cin>>t;
  while (t--)
  {
    string str;
    cin>>str;
    int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
      if(str[i] == pi[i]){
        count++;
      } else
      {
        break;
      }
    }

    cout<<count<<endl;
  }
  return 0;
}