#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<vector<int>> V2D;

  // creating a 2D triangular structure
  for (int i = 0; i < 10; i++)
  {
    vector<int> temp;
    for (int j = 0; j <= i; j++)
    {
      temp.push_back(i);
    }
    V2D.push_back(temp);
  }
  // using iterator
  cout << "using iterator:\n";
  vector<vector<int>>::iterator outer;
  vector<int>::iterator inner;
  for (outer = V2D.begin(); outer != V2D.end(); outer++)
  {
    for (inner = outer->begin(); inner != outer->end(); inner++)
    {
      cout << *inner << ' ';
    }
    cout << '\n';
  }
  // using index
  cout << "\nusing indexes:\n";
  for (unsigned i = 0; i < V2D.size(); i++)
  {
    for (unsigned j = 0; j < V2D[i].size(); j++)
    {
      cout << V2D[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
