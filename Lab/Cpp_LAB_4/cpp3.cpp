#include <bits/stdc++.h>
using namespace std;

int fun (int &b) {
    cout<<"Reference er value "<<b<<endl;
}

int main()
{
    int i = 5;
    int *p;
    p = &i;
    cout<<i<<endl<<*p<<endl;
    int &r = i;

    cout<<r<<endl;
    r = 10;
    cout<<"after reassign"<<endl;
    cout<<i<<" "<<*p<<" "<<r<<endl;
    fun(i);
    return 0;
}