#include <iostream>
#include "mine.h"

using namespace std;

int main()
{
  Stack<int> s(3);
  s.push(1);
  s.push(2);
  s.push(3);
  cout << s.peak() << endl;

  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;

  Stack<double> s2(3);

  s2.push(3.5);

  cout << s2.pop() << endl;
  cout << s2.pop();
  return 0;
}
