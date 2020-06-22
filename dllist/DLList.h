template <typename T>
struct NODE
{
  T data;
  NODE *next;
  NODE *prev;
};

template <typename T>
class DLList
{
private:
  NODE<T> *head;
  NODE<T> *tail;

public:
  int length;
  DLList()
  {
    head = NULL;
    tail = NULL;
    length = 0;
  }

  void push(T val)
  {
    NODE<T> *n = new NODE<T>;
    n->data = val;
    n->next = NULL;
    n->prev = tail;
    length++;

    if (head == NULL)
    {
      head = n;
      tail = n;
    }
    else
    {
      tail->next = n;
      tail = tail->next;
    }
  }

  T &operator[](int i)
  {
    NODE<T> *p = head;
    int count = 0;
    while (p != NULL)
    {
      if (count == i)
        return (p->data);
      count++;
      p = p->next;
    }
    throw "ASShole";
  }
};
