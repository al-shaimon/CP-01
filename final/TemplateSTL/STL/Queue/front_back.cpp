// queue::front/back
#include <iostream>
#include <queue>
using namespace std;
int main()
{
  queue<int> myqueue;

  myqueue.push(77);
  myqueue.push(16);
  cout << "myqueue.front() = " << myqueue.front() << endl;
  cout << "myqueue.back() = " << myqueue.back() << endl;

  // modify front element
  myqueue.front() -= myqueue.back();
  cout << "myqueue.front() is now " << myqueue.front() << endl;

  // modify back element
  myqueue.back() += myqueue.front();
  cout << "myqueue.back() is now " << myqueue.back() << endl;
  return 0;
}
