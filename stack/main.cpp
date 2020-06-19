#include <iostream>
#include "mine.h"

using namespace std;

int main()
{
  Stack s(3);
  s.push(1);
  s.push(2);
  s.push(3);
  cout << s.peak() << endl;

  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;

  cout << s.pop() << endl; // throws an error

  return 0;
}
