#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  if(n>0){
    cout<<n<<endl;
  } else {
    int l = n/10;
    int l2 = (n/100)*10+(n%10);
    if(l>l2){ 
      cout<<l<<endl;
    } else {
      cout<<l2<<endl;
    }
  }
  return 0;
}