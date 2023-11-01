// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     int n = s.size();
//     if (s[n - 3] == '9') {
//         cout << "GOTO Vasilisa." << endl;
//     } else if (s[n - 1] >= '5') {
//         s[n - 3]++;
//         cout << s.substr(0, n - 2) << endl;
//     } else {
//         cout << s.substr(0, n - 2) << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//   double input;
//   cin >> input;
//   long long output = round(input);
//   cout << output << endl;
//   return 0;
// }

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
  long double n;
  cin >> n;
  unsigned long long output;
  string s = to_string(n);
  if (n - floorl(n) < 0.5)
    output = floorl(n);
  else
    output = ceill(n);

  string output_str = to_string(output);
  if (s.back() == '9')
    cout << "GOTO Vasilisa." << endl;
  else
    cout << output << endl;

  return 0;
}
