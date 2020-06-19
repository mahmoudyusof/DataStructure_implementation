template <typename T>
class Stack
{
private:
  T *st;
  int s;
  int top;

public:
  Stack(int size)
  {
    st = new T[size];
    s = size;
    top = -1;
  }

  ~Stack()
  {
    delete st;
  }

  void push(T value)
  {
    if (isFull())
    {
      throw "StackOverflow Error";
    }
    else
    {
      top++;
      st[top] = value;
    }
  }

  T pop()
  {
    if (isEmpty())
    {
      throw "Stack Underflow Error";
    }
    else
    {
      T popVal = st[top];
      st[top] = 0;
      top--;
      return popVal;
    }
  }

  T peak()
  {
    return st[top];
  }

  bool isEmpty()
  {
    if (top == -1)
      return true;
    else
      return false;
  }
  bool isFull()
  {
    if (top == s - 1)
      return true;
    else
      return false;
  }
};
