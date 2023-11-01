// Single inheritance

// #include <bits/stdc++.h>
// using namespace std;
// // base class
// class Vehicle
// {
// public:
//   Vehicle()
//   {
//     cout << "This is a Vehicle\n";
//   }
// };
// // sub class derived from a single base classes
// class Car : public Vehicle
// {
//   // body of this class
// public:
//   Car()
//   {
//     cout << "This is car\n";
//   }
// };
// int main()
// {
//   Car obj;
//   return 0;
// }

// Multiple inheritance

// #include <bits/stdc++.h>
// using namespace std;
// // first base class
// class Vehicle
// {
// public:
//   Vehicle()
//   {
//     cout << "This is a Vehicle\n";
//   }
// };
// // second base class
// class FourWheeler
// {
// public:
//   FourWheeler()
//   {
//     cout << "This is a 4 wheeler Vehicle\n";
//   }
// };
// // sub class derived from two base classes
// class Car : public Vehicle, public FourWheeler
// {
// public:
//   Car()
//   {
//     cout << "This is car\n";
//   }
// };
// int main()
// {
//   Car obj;
//   return 0;
// }

// C++ program to implement Multilevel Inheritance

// #include <iostream>
// using namespace std;
// // base class
// class Vehicle
// {
// public:
//   Vehicle()
//   {
//     cout << "This is a Vehicle\n";
//   }
//   ~Vehicle()
//   {
//     cout << "Destructor for Vehicle\n";
//   }
// };
// // first sub_class derived from class vehicle
// class fourWheeler : public Vehicle
// {
// public:
//   fourWheeler()
//   {
//     cout << "Objects with 4 wheels are vehicles\n";
//   }
//   ~fourWheeler()
//   {
//     cout << "Destructor for fourWheeler\n";
//   }
// };
// // sub class derived from the derived base class fourWheeler
// class Car : public fourWheeler
// {
// public:
//   Car()
//   {
//     cout << "Car has 4 Wheels\n";
//   }
//   ~Car()
//   {
//     cout << "Destructor for Car class\n";
//   }
// };
// int main()
// {
//   Car obj;
//   return 0;
// }

// C++ program to implement Hierarchical Inheritance

// #include <iostream>
// using namespace std;
// // base class
// class Vehicle
// {
// public:
//   Vehicle()
//   {
//     cout << "This is a Vehicle\n";
//   }
// };
// // first sub class
// class Car : public Vehicle
// {
//   public:
//   Car(){
//     cout<<"this is car"<<endl;
//   }
// };
// // second sub class
// class Bus : public Vehicle
// {
//   public:
//   Bus(){
//     cout<<"this is bus"<<endl;
//   }
// };
// int main()
// {
//   Car obj1;
//   Bus obj2;
//   return 0;
// }

// C++ program for Hybrid Inheritance

// #include <iostream>
// using namespace std;
// // base class
// class Vehicle
// {
// public:
//   Vehicle() { cout << "This is a Vehicle\n"; }
// };
// // base class
// class Fare
// {
// public:
//   Fare()
//   {
//     cout << "Fare of Vehicle\n";
//   }
// };
// // first sub class
// class Car : public Vehicle
// {
// public:
//   Car()
//   {
//     cout << "Fare of Car\n";
//   }
// };
// // second sub class
// class Bus : public Vehicle, public Fare
// {
// public:
//   Bus()
//   {
//     cout << "Fare of Bus\n";
//   }
// };
// int main()
// {
//   Bus obj2;
//   return 0;
// }

#include <iostream>
using namespace std;
// base class
class A
{
public:
  class B
  {
  private:
    int num;
  public:
  void getData(int n){
    num = n;
  }
  void putData(){
    cout<<"This number is "<<num;
  }
  };
};

int main()
{
  cout<<"Nested classes in C++";
  A::B obj;
  // obj.getData(9)
  // obj.putData();
  return 0;
}