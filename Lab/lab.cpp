// ===========Friend Function===============
// #include <bits/stdc++.h>
// using namespace std;

// class base{
//   private:
//     int private_variable = 90;
//   protected:
//     int protected_variable = 100;
//   public:
//     friend void friendFunction(base& obj);  
// };

// void friendFunction(base& obj){
//   cout<<"Private variable: "<<obj.private_variable<<endl;
//   cout<<"Protected variable: "<<obj.protected_variable<<endl;
// }
// int main()
// {
//   base object1;
//   friendFunction(object1);
//   return 0;
// }




// // Assign and print the roll number, phone number and address of two students having 
// // names "Shofi" and "Jamshed" respectively by creating two objects of the class 'Student'.

// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//   public:
//     int roll;
//     string name;
//     string phone_num;
//     string address;
// };

// int main()
// {
//   Student Shofi = {1, "Shofi", "0123456789", "Chittagong"};
//   Student Jamshed = {2, "Jamshed", "0123456789", "Dhaka"};
//   cout<<Shofi.roll<<endl<<Shofi.name<<endl<<Shofi.phone_num<<endl<<Shofi.address<<endl;
//   cout<<Jamshed.roll<<endl<<Jamshed.name<<endl<<Jamshed.phone_num<<endl<<Jamshed.address<<endl;
//   return 0;
// }