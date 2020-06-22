#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{

  Queue q(3);

  q.enqueue(3);
  q.enqueue(2);
  q.enqueue(1);

  cout << q.dequeue() << endl;
  cout << q.dequeue() << endl;
  cout << q.dequeue() << endl;
  cout << q.dequeue() << endl; // should throw an error

  return 0;
}