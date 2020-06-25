class Node
{
public:
  Node *left;
  Node *right;
  int value;
  Node(int val)
  {
    value = val;
    right = NULL;
    left = NULL;
  }

  ~Node()
  {
    delete[] left;
    delete[] right;
  }

  void insert(int val)
  {
    if (val <= value)
    {
      if (left == NULL)
      {
        left = new Node(val);
      }
      else
      {
        left->insert(val);
      }
    }
    else
    {
      if (right == NULL)
      {
        right = new Node(val);
      }
      else
      {
        right->insert(val);
      }
    }
  }
};