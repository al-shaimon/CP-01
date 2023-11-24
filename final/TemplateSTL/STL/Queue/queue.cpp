// queue::size/empty
#include <iostream>
#include <queue>
using namespace std;
int main()
{
  queue<int> Q;

  // just push some elements
  for (int i = 0; i < 5; i++)
    Q.push(i * i);

  cout << "Queue has " << Q.size() << " elements" << endl;

  Q.pop(); // not a good way, first check for Q.empty()

  if (!Q.empty())
    Q.pop(); // this is the porper way

  while (!Q.empty())
    Q.pop(); // pop all element

  if (Q.size() == 0)
    cout << "Q is empty" << endl; // not a good way
  if (Q.empty())
    cout << "Q is empty" << endl; // this is the proper way

  return 0;
}