#include <bits/stdc++.h>
using namespace std;
void IOS_width()
{
  cout << "Implementing ios::width\n\n";
  char c = 'A';
  cout.width(5);
  cout << c << "\n";
  int temp = 10;
  cout << temp;
}
void IOS_precision()
{
  cout << "Implementing ios::precision\n\n";
  cout << "Implementing ios::width";
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(2);
  cout << 3.1422;
}
// The fill() function fills the unused white spaces in a value with a character of choice.
void IOS_fill()
{
  cout << "Implementing ios::fill\n\n";
  char ch = 'a';
  cout.fill('*');
  cout.width(10);
  cout << ch << "\n";
  int i = 1;
  cout.width(5);
  cout << i;
}
void IOS_setf()
{
  cout << "Implementing ios::setf\n\n";
  int val1 = 100, val2 = 200;
  cout.setf(ios::showpos);
  cout << val1 << " " << val2;
}
void IOS_unsetf()
{
  cout << "Implementing ios::unsetf\n\n";
  cout.setf(ios::showpos | ios::showpoint);
  // Clear the showflag flag without
  // affecting the showpoint flag
  cout.unsetf(ios::showpos);
  cout << 200.0;
}
// Driver Method
int main()
{
  IOS_width();
  IOS_precision;
  IOS_fill();
  IOS_setf();
  IOS_unsetf();
  return 0;
}

// Output:
// Implementing ios::width
// A
// 10
// Implementing ios::fill
// *********a
// ****1
// Implementing ios::setf
// +100 +200
// Implementing ios::unsetf
// 200.000