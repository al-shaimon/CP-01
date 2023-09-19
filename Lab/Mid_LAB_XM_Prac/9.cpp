// Print the sum, difference and product of two complex numbers by creating a class
// named 'Complex' with separate functions for each operation whose real and imaginary
// parts are entered by the user.

#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
  double real;
  double imaginary;

  Complex() {}

  Complex(double real, double imaginary)
  {
    this->real = real;
    this->imaginary = imaginary;
  }

  Complex add(Complex c)
  {
    Complex result;
    result.real = this->real + c.real;
    result.imaginary = this->imaginary + c.imaginary;
    return result;
  }

  Complex subtract(Complex c)
  {
    Complex result;
    result.real = this->real - c.real;
    result.imaginary = this->imaginary - c.imaginary;
    return result;
  }

  Complex multiply(Complex c)
  {
    Complex result;
    result.real = (this->real * c.real) - (this->imaginary * c.imaginary);
    result.imaginary = (this->imaginary * c.real) + (this->real * c.imaginary);
    return result;
  }

  void print()
  {
    cout << real << " + " << imaginary << "i" << endl;
  }
};

int main()
{
  double real1, imaginary1, real2, imaginary2;

  cout << "Enter the real and imaginary parts of the first complex number: ";
  cin >> real1 >> imaginary1;
  cout << "Enter the real and imaginary parts of the second complex number: ";
  cin >> real2 >> imaginary2;

  Complex c1(real1, imaginary1);
  Complex c2(real2, imaginary2);

  Complex sum = c1.add(c2);
  Complex difference = c1.subtract(c2);
  Complex product = c1.multiply(c2);

  cout << "The sum of the two complex numbers is: ";
  sum.print();
  cout << "The difference of the two complex numbers is: ";
  difference.print();
  cout << "The product of the two complex numbers is: ";
  product.print();

  return 0;
}
