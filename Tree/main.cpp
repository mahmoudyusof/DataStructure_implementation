#include <iostream>
#include "Node.h"
using namespace std;

void through(Node *r)
{
  cout << r->value << endl;
  if (r->right != NULL)
    through(r->right);
  if (r->left != NULL)
    through(r->left);
}

int main()
{

  Node *root = new Node(5);
  for (int i = 0; i < 10; i++)
  {
    if (i == 5)
      continue;
    root->insert(i);
  }

  through(root);

  return 0;
}