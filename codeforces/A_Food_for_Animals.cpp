#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    long long totalFoods = a+b+c;
    long long totalAnimals = x+y;
    if(totalFoods < totalAnimals){
      cout<<"NO"<<endl;
    } else{
      if((a+c) >= x && (b+c) >=y){
        cout<<"YES"<<endl;
      } else{
        cout<<"NO"<<endl;
      }
    }
    
  }
  return 0;
}