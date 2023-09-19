// Create a class named 'Student' with a string variable 'name' and an integer variable 
//'roll_no'. Assign the value of roll_no as '2' and that of name as "Jamshed" by creating 
// an object of the class Student

#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
    string name;
    int roll_no;
};

int main()
{
  Student student;
  student.name = "Jamshed";
  student.roll_no = 2;
  // cout<<student.name<<endl<<student.roll_no<<endl;
}