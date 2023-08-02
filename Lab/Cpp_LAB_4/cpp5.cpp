#include<bits/stdc++.h>
using namespace std;

int add(int a,  int b){
    return a + b;
}

double add(double c, double d){
    return (c+d)*3;
}


int main()
{
    cout<<add(100,200)<<endl;
    cout<<add((double)3.678,(double)7.88)<<endl;
}