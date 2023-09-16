#include <iostream>
using namespace std;
int sub(int a, int b = 20)
{
  int result;
  result = a - b;
  return result;
}

int main()
{
  int a = 100;
  int b = 200;
  int result;
  result = sub(b);
  cout << "value 1 :" << result;
  result = sub(a);
  cout << " value 2 :" << result;
  return 0;
}

// #include <iostream>
// using namespace std;

// void pri(int z, int x){
//   cout<<x<<endl;
// }

// void pri(int a){
//   cout<<a<<endl;
// }

// int main()
// {
//   pri(5);
//   return 0;
// }
// #include <iostream>
// using namespace std;

// class Employee
// {
// private:
//   int id, salary;

// public:
//   Employee(int id, int salary){
//     this-> id = id;
//     this-> salary = salary;
//   }

//   void output()
//   {
//     cout<<id<<" "<<salary<<endl;
//   }
// };

// int main()
// {
//   Employee E1(10, 3000);
//   Employee E2 = E1;
//   return 0;
// }
// #include <iostream>
// using namespace std;

// class Employee
// {
// private:
//   int year;
//   string name, address;

// public:
//   void input()
//   {
//     cin >> name >> year >> address;
//   }

//   void output()
//   {
//     cout << name << " " << year << " " << address << endl;
//   }
// };

// int main()
// {
//   Employee e[100];
//   for (int i = 0; i < 100; i++)
//   {
//     e[i].input();
//   }
//   for (int i = 0; i < 100; i++)
//   {
//     e[i].output();
//   }
//   return 0;
// }
// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//   int id;
//   double cgpa;

// public:
//   void input()
//   {
//     cin >> id;
//     cin >> cgpa;
//   }
// };

// int main()
// {
//   Student t1[100];
//   for (int i = 0; i < 100; i++)
//   {
//     t1[i].input();
//   }
//   return 0;
// }
// #include <iostream>
// using namespace std;

// class Time{
//   private:
//     int hour, minutes;
//   public:
//     Time(int h, int m){
//       this-> hour = h;
//       this-> minutes = m;
//     }
//   friend void addTime(Time t1, Time t2);
// };

// void addTime(Time t1, Time t2){
//   int Hr = t1.hour + t2.hour + (t1.minutes + t2.minutes)/60;
//   int Mn = (t1.minutes + t2.minutes)%60;
//   cout<<Hr<<" Hour "<<Mn<<" Minutes"<<endl;
// }

// int main()
// {
//   Time T1(12,10), T2(1,55);
//   addTime(T1, T2);
//   return 0;
// }

// #include <iostream>
// using namespace std;
// class flower{
//   int PL, LL;
//   public:
//   flower(int PL, int LL){
//    this-> PL = PL;
//    this-> LL = LL;
//   }
//   void show(){
//     cout<<PL<<" "<<LL<<endl;
//   }
// };

// int main()
// {
//   flower f1(12,10), f2(1,55);
//   f1.show();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class Room
// {
//   int width, height;
//   public:
//   void setValue(int w, int h)
//   {
//     width = w;
//     height = h;
//   }
// };
// int main(){
//   Room obj;
//   obj.setValue(12,5);
// }

// #include <iostream>
// using namespace std;
// class A{
//   int i;
//   public:
//   void set (int x){
//     i = x;
//   }
// };

// int main()
// {
//   A ob;
//   ob.set(6);
//   return 0;
// }
// #include <iostream>
// using namespace std;
// class A{
// public:
//   int i;
// };

// void set(A ob, int x){
//   ob.i = x;
// }

// int main()
// {
//   A ob;
//   set(ob,6);
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Line{
//   public:
//     void setLength(double len);
//     double getLength(void);
//     Line();
//     ~Line();
//   private:
//     double length;
// };

// Line::Line(void){
//   cout<<"Object Created"<<endl;
// }

// Line::~Line(void){
//   cout<<"Object is being deleted"<<endl;
// }

// void Line::setLength(double len){
//   length = len;
// }

// double Line::getLength(void){
//   return length;
// }

// int main()
// {
//   Line line;
//   line.setLength(6.0);
//   cout<<"Length of line : "<< line.getLength() <<endl;
//   return 0;
// }