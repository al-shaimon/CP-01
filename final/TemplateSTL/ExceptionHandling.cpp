#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num1, num2;
  try
  {
    cout << "Enter the 1st Number:" << endl;
    cin >> num1;
    cout << "Enter the 1st Number:" << endl;
    cin >> num2;
    if (num2 == 0)
    {
      throw "Division by zero is not possible";
    }
    double result = (double)num1 / num2;
    cout << "Result=" << result;
  }
  catch (const char *x)
  {
    cout << x;
  }
}