template <typename T>
class Stack
{
private:
  T *st;
  int s;
  int top;

public:
  Stack(int size);

  ~Stack();

  void push(T value);

  T pop();

  T peak();

  bool isEmpty();
  bool isFull();
};

template <typename T>
Stack<T>::Stack(int size)
{
  st = new T[size];
  s = size;
  top = -1;
}

template <typename T>
Stack<T>::~Stack()
{
  delete st;
}

template <typename T>
void Stack<T>::push(T value)
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

template <typename T>
T Stack<T>::pop()
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

template <typename T>
T Stack<T>::peak()
{
  return st[top];
}

template <typename T>
bool Stack<T>::isEmpty()
{
  if (top == -1)
    return true;
  else
    return false;
}

template <typename T>
bool Stack<T>::isFull()
{
  if (top == s - 1)
    return true;
  else
    return false;
}