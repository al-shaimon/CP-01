#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> t1, t2, t3;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x == 1) t1.push_back(i);
        else if (x == 2) t2.push_back(i);
        else t3.push_back(i);
    }
    int w = min({t1.size(), t2.size(), t3.size()});
    cout << w << endl;
    for (int i = 0; i < w; i++) {
        cout << t1[i] << " " << t2[i] << " " << t3[i] << endl;
    }
    return 0;
}
