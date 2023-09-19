// Write a program that would print the information (name, year of joining, salary,
// address) of three employees by creating a class named 'Employee'. The output should
// be as follows:
// Name Year of Joining Address
// Shamsu 1992 Chittagong
// Soleman 1994 Chittagong
// Kalam 1990 Dhaka

#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
  string name;
  int yearOfJoining;
  string address;

  Employee(string name, int yearOfJoining, string address)
  {
    this->name = name;
    this->yearOfJoining = yearOfJoining;
    this->address = address;
  }

  void printInfo()
  {
    cout << name << '\t';
    cout << yearOfJoining << '\t' << '\t';
    cout << address << '\n';
  }
};

int main()
{
  Employee employee1("Shamsu", 1992, "Chittagong");
  Employee employee2("Soleman", 1994, "Chittagong");
  Employee employee3("Kalam", 1990, "Dhaka");

  cout << "Name    Year of Joining Address" << endl;
  employee1.printInfo();
  employee2.printInfo();
  employee3.printInfo();

  return 0;
}
