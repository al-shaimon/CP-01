#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> v(n), b, c;
    for (auto &x : v)
    {
      cin >> x;
    }

    sort(v.begin(), v.end());
    int count = 0;
    int minValue = v[0];
    for(int i = 0; i < n; i++){
      if(v[i]==minValue){
        count++;
      }
    }

    if(count == n){
      cout<<-1<<endl;
    } else {
      cout<<count<<" "<<n-count<<endl;
      for(int i = 0; i < count; i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;

      for(int i = count; i < n; i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
    }

  }

  return 0;
}
