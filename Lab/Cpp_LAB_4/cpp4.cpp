#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*p)(int,int);
    p = add;
    cout<<p<<endl; 
    //return memory address of the function
    //shajalal shohag cp course
    cout<<p(4,5)<<endl;
}