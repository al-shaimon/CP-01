#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int a[n];

    for(int i = 0; i < n; i++){
      cin>>a[i];      
    }  

    for(int i = 0; i < n; i++){
      if(a[i] % 2 != 0){
        for(int j = i + 1; j < n; j++){
          if(a[j] % 2 != 0 ){
            swap(a[i],a[j]);
            break;
          }
        }
      }
    } 

    for(int i = 0; i < n; i++){
      if(a[i] % 2 == 0){
        for(int j = i + 1; j < n; j++){
          if(a[j] % 2 == 0 ){
            swap(a[i],a[j]);
            break;
          }
        }
      }
    } 




    for(int i = 0; i < n; i++){
      cout<<a[i]<<" ";
    }

  cout<<endl;
  }
  
  return 0;
}