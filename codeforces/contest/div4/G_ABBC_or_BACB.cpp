// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int t;
//   cin >> t;

//   while (t--)
//   {
//     string s;
//     cin >> s;
//     int len = s.size();
//     int ca = 0, cb = 0;
//     vector<int> v;
//     int c = 0;
//     int f = 0;

//     for (int i = 0; i < len; i++)
//     {
//       if (i > 0){
//         if(s[i]=='B' && s[i-1] == 'B'){
//           f = 1;
//         }
//       }
//       if(s[i]=='B'){
//         cb++;
//         if(c>0){
//           v.push_back(c);
//           c=0;
//         } else {
//           c++;
//           ca++;
//         }
//       }
//     }
//   if()
//   }

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  cin >> s;
  int len = s.size();
  int ca = 0, cb = 0;
  vector<int> v;
  int c = 0;
  int f = 0;

  for (int i = 0; i < len; i++)
  {
    if (i > 0)
    {
      if (s[i] == 'B' && s[i - 1] == 'B')
      {
        f = 1;
      }
    }
    if (s[i] == 'B')
    {
      cb++;
      if (c > 0)
      {
        v.push_back(c);
        c = 0;
      }
      else
      {
        c++;
        ca++;
      }
    }
  }
  if (c > 0)
  {
    v.push_back(c);
  }
  if (ca == 0 || cb == 0)
  {
    cout << 0 << endl;
    return;
  }

  if (f)
  {
    cout << ca << endl;
    return;
  }

  if (cb >= v.size())
  {
    cout << ca << endl;
    return;
  }
  sort(v.begin(), v.end());
  ca = v[0];

  cout << ca << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}