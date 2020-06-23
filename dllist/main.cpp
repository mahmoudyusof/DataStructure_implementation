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

  cout << dll[-3] << endl;
  cout << dll[-2] << endl;
  cout << dll[-1] << endl;

  cout << "-----" << endl;

  double arr[5] = {0.1, 0.2, 0.3, 0.4, 0.5};

  DLList<double> dll_from_arr(arr, 5);

  cout << dll_from_arr[0] << endl;
  cout << dll_from_arr[1] << endl;
  cout << dll_from_arr[2] << endl;

  cout << dll_from_arr[-3] << endl;
  cout << dll_from_arr[-2] << endl;
  cout << dll_from_arr[-1] << endl;

  cout << "--------" << endl;
  cout << dll.length << endl
       << dll_from_arr.length << endl;
  ;

  return 0;
}