#include <iostream>
using namespace std;

int main() {
    int w, d, l;
    cin >> w >> d >> l;
    int n = w * 100 + d * 10 + l;
    if (n % 4 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
