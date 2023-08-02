#include<bits/stdc++.h>
using namespace std;

class fun{
    public:
        int a;
        fun(){
            a = 100;
        }
        fun(int c, int d){
            a = c+d;
        }
        fun(int e){
            a = e;
        }
        int ret(){
            return a;
        }
};

int main()
{
    fun ob1;
    fun ob2(10);
    fun ob3(20,30);
    cout<<ob1.ret()<<endl;
    cout<<ob2.ret()<<endl;
    cout<<ob3.ret()<<endl;
}