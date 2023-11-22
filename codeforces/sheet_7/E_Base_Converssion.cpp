#include <bits/stdc++.h>
using namespace std;

vector<int> getBinary(int n)
{
  if (n == 0)
  {
    return vector<int>();
  }
  vector<int> binary = getBinary(n / 2);
  binary.push_back(n % 2);
  return binary;
}

int main()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> binary = getBinary(n);
    for (int i = 0; i < binary.size(); i++)
    {
      cout << binary[i];
    }
    cout << endl;
  }

  return 0;
}