#include <iostream>
using namespace std;
// Function for Exception Thrown
void exceptionFunction()
{
  // try block - inside Function
  try
  {
    // throw exception : In function
    throw 0;
  }
  catch (int i)
  {
    cout << "\nIn Function : Wrong Input :" << i;
    // re throw exception : out of the function
    throw;
  }
}
int main()
{
  int var = 0;
  // try block - for exception code
  try
  {
    // Inside try block
    exceptionFunction();
  } // catch block
  catch (int ex)
  {
    // Code executed when exception caught
    cout << "\nIn Main : Wrong Input :" << ex;
  }
  return 0;
}
// Output:
// In Function : Wrong Input :0
// In Main : Wrong Input :0