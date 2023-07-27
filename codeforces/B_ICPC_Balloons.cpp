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
    string str;
    cin>>str;
    int frequency[26] = {0};
    int sum = 0;
    for(int i = 0; i < n; i++){
      int count = (int)str[i] - 65;
      if(frequency[count] == 0){    
        frequency[count]++;
      }
      frequency[count]++;
    }
    for(int i = 0; i < 26; i++){
      sum+=frequency[i];
    }
    cout<<sum<<endl;
  }
  
  return 0;
}