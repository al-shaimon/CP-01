#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    int elevatorOne = a - 1;
    int elevatorTwo = abs(b-c) + (c-1);
    if(elevatorOne<elevatorTwo){
      cout<<1<<endl;
    } else if(elevatorTwo<elevatorOne){
      cout<<2<<endl;
    } else {
      cout<<3<<endl;
    }
  }
  
  return 0;
}