// 3d array of vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  // use of [] and ()
  vector<int> v1[100]; // creates an array of vectors, i.e. 100 vectors
  vector<int> v2(100); // creates 1 vector of size 100
  // creating a 2D array 100x2 where each element is a vector,
  // so in total, it is a 3D structure, as vector itself is 1D
  vector<int> v3[100][2];
  return 0;
}
