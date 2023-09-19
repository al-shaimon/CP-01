// Print the average of three numbers entered by the user by creating a class named
// 'Average' having a function to calculate and print the average without creating any
// object of the Average class.

#include <bits/stdc++.h>
using namespace std;

class Average
{
public:
  double a, b, c;

  void calculateAverage(double a, double b, double c)
  {
    double average = (a + b + c) / 3.0;
    cout << average << endl;
  }
};

int main()
{
  double a, b, c;
  cin >> a >> b >> c;

  Average avg;
  avg.calculateAverage(a, b, c);

  return 0;
}