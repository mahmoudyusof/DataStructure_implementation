
template <typename T>
class Node
{
public:
  Node *left;
  Node *right;
  T value;
  Node(T val)
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

  void insert(T val)
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