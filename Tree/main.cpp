#include <iostream>
#include "Node.h"
using namespace std;

template <typename T>
void through(Node<T> *r)
{
  cout << r->value << endl;
  if (r->right != NULL)
    through(r->right);
  if (r->left != NULL)
    through(r->left);
}

int main()
{

  Node<int> *root = new Node<int>(5);
  for (int i = 0; i < 10; i++)
  {
    if (i == 5)
      continue;
    root->insert(i);
  }

  through<int>(root);

  return 0;
}