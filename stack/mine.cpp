#include "mine.h"

Stack::Stack(int size)
{
  st = new int[size];
  s = size;
  top = -1;
}

Stack::~Stack()
{
  delete st;
}

void Stack::push(int value)
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

int Stack::pop()
{
  if (isEmpty())
  {
    throw "Stack Underflow Error";
    return 0;
  }
  else
  {
    int popVal = st[top];
    st[top] = 0;
    top--;
    return popVal;
  }
}

int Stack::peak()
{
  return st[top];
}

bool Stack::isEmpty()
{
  if (top == -1)
    return true;
  else
    return false;
}

bool Stack::isFull()
{
  if (top == s - 1)
    return true;
  else
    return false;
}