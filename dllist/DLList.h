#include <iostream>
using namespace std;

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
  int length = 0;
  DLList()
  {
    head = NULL;
    tail = NULL;
    length = 0;
  }

  DLList(T *arr, int len)
  {
    head = NULL;
    tail = NULL;
    length = 0;
    for (int i = 0; i < len; i++)
    {
      push(arr[i]);
    }
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
    if (i >= 0)
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
      throw "list index out of range";
    }
    else
    {
      NODE<T> *p = tail;
      int count = -1;
      while (p != NULL)
      {
        if (count == i)
          return p->data;
        count--;
        p = p->prev;
      }
    }
  }
};
