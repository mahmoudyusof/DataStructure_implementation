#include <iostream>
#include "DLList.h"
using namespace std;

int main()
{
  DLList<int> dll;

  dll.push(1);
  dll.push(2);
  dll.push(3);

  cout << dll[0] << endl;
  cout << dll[1] << endl;
  cout << dll[2] << endl;

  return 0;
}