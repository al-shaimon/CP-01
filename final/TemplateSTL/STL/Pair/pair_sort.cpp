// CPP Program to demonstrate make_pair()
// function in pair
#include <iostream>
#include <utility>
using namespace std;
// Driver Code
int main()
{
  pair<int, char> PAIR1;
  pair<string, double> PAIR2("GeeksForGeeks", 1.23);
  pair<string, double> PAIR3;
  PAIR1.first = 100;
  PAIR1.second = 'G';
  PAIR3 = make_pair("GeeksForGeeks is Best", 4.56);
  cout << PAIR1.first << " ";
  cout << PAIR1.second << endl;
  cout << PAIR2.first << " ";
  cout << PAIR2.second << endl;
  cout << PAIR3.first << " ";
  cout << PAIR3.second << endl;
  return 0;
}

// pair sort
//  Bool cmp(pair<int,int> &apair<int,int> &b){
//  if (a.first == b.first)
//   Return a.second< b.second;
//  Return a.first<a.secone;
//  }