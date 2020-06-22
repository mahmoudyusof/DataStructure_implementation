#include <iostream>
#include <string>
#include "Queue.h"

using namespace std;

int main()
{

  Queue<int> q(3);

  q.enqueue(3);
  q.enqueue(2);
  q.enqueue(1);

  cout << q.dequeue() << endl;
  cout << q.dequeue() << endl;
  cout << q.dequeue() << endl;

  Queue<string> sq(3);

  sq.enqueue("one");
  sq.enqueue("two");
  sq.enqueue("three");

  cout << sq.dequeue() << endl;
  cout << sq.dequeue() << endl;
  cout << sq.dequeue() << endl;

  return 0;
}