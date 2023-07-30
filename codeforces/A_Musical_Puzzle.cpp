#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count[7][7] = {0};
        for(int i = 0; i < n; i++){
          count[s[i] - 'a'][s[i + 1] - 'a']++;
        }
        int ans = 0;
        for(int i = 0; i < 7; i++){
          for(int j = 0; j < 7; j++){
            if(count[i][j]){
              ans++;
            }
          }
        }
        cout<<ans<<endl;
    }
    return 0;
}