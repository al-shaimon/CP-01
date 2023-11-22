#include <bits/stdc++.h>
using namespace std;

int countVowels(string S, int i = 0) {
    if(i == S.size()) {
        return 0;
    }
    char c = tolower(S[i]);
    int count = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 0;
    return count + countVowels(S, i + 1);
}

int main() {
    string S;
    getline(cin, S);
    cout << countVowels(S) << endl;
    return 0;
}