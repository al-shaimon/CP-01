#include <bits/stdc++.h>
using namespace std;

class ss
{
public:
    static int a;
    static int b;
    ss() {
        b = 0;
    }
    static void fun()
    {
        cout << ++a << " " << ++b << endl;
    }
};

int ss::a;
int ss::b;

int main()
{
    ss ob, ob1;
    ob.fun();
    ob.fun();
    ob1.fun();
    return 0;
}