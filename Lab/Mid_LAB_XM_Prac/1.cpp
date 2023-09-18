#include <bits/stdc++.h>
using namespace std;

class Student{
  public:
    int roll;
    string name;
};

int main()
{
  Student student;
  student.name = "Abdullah Al Shaimon";
  student.roll = 2;
  cout<<student.name<<endl<<student.roll<<endl;
}