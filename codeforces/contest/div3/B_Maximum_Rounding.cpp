// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int t;
//   cin>>t;
//   while (t--)
//   {
//     int k;
//     cin>>k;
    
//   }
  
//   return 0;
// }


#include <bits/stdc++.h>
#define run  ios_base::sync_with_stdio(false);cin.tie(0);

#define ll long long
#define ull unsigned ll
#define ld long double
#define endl "\n"
#define gcd(x, y)  __gcd(x, y)
#define pb push_back

#define pi 3.14159265359
#define N 1007
#define minimum -9223372036854775807
#define maximum -minimum
#define mod 1000003

using namespace std;

int main()
{
    run;
    ll t;
    cin>>t;
    while(t--)
    {
        string n;
    cin>>n;
    ll l=n.length();
    n='0'+n;
        reverse(n.begin(), n.end());
        ll k=0;
        for(ll i=0; i<l; i++)
    {
            if(n[i]>='5')
            {
                n[i+1]++;
                for(ll j=i; j>=k; j--)
                {
                    n[j]='0';
                }
                k=i;
            }
        }
        reverse(n.begin(), n.end());
        if(n[0]=='0')
        {
          for(ll i=1; i<=l; i++)
          {
              cout<<n[i];
          }
          cout<<endl;
    }
    else
    {
      for(ll i=0; i<=l; i++)
          {
              cout<<n[i];
          }
          cout<<endl;
    }
          
    }
}