#include<bits/stdc++.h>
using namespace std;

class ss{
    public:
        static int a;
        int b = 0;
        // ss() {
        //     b = 0;
        // }
        void  fun(){
            cout<<++a<<" "<<++b<<endl;
        }
};

int ss::a;

int main()
{
    ss ob,ob1;
    ob.fun();
    ob.fun();
    ob1.fun();
    return 0;
}