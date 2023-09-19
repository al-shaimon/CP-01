// Assign and print the roll number, phone number and address of two students having 
// names "Shofi" and "Jamshed" respectively by creating two objects of the class 'Student'.

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int roll_no;
  string name;
  string phone_number;
  string address;
};

int main()
{
  Student Shofi = {1, "Shofi", "01777777777", "Dhaka, Bangladesh"};
  Student Jamshed = {2, "Jamshed", "01888888888", "Chittagong, Bangladesh"};
  cout << "Name: " << Shofi.name << endl;
  cout << "Roll No: " << Shofi.roll_no << endl;
  cout << "Phone Number: " << Shofi.phone_number << endl;
  cout << "Address: " << Shofi.address << endl;

  cout << endl;

  cout << "Name: " << Jamshed.name << endl;
  cout << "Roll No: " << Jamshed.roll_no << endl;
  cout << "Phone Number: " << Jamshed.phone_number << endl;
  cout << "Address: " << Jamshed.address << endl;
}