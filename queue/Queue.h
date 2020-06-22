#include <iostream>
using namespace std;

class Queue
{
private:
  int front = -1;
  int back = -1;
  int size;
  int *arr;

public:
  Queue(int s)
  {
    size = s;
    arr = new int[size];
  }

  ~Queue()
  {
    delete arr;
  }

  bool isEmpty()
  {
    if (front == -1 && back == -1)
      return true;
    else
      return false;
  }

  bool isFull()
  {
    return (back >= size - 1);
  }

  void enqueue(int val)
  {
    if (isFull())
      throw "Queue is full";
    if (isEmpty())
      front = back = 0;
    else
      back++;

    arr[back] = val;
  }

  int dequeue()
  {
    if (isEmpty())
      throw "Queue is empty";

    if (front == back)
    {
      front = -1;
      back = -1;
      return arr[0];
    }
    else
    {
      int x = arr[front];
      for (int i = 0; i < back; i++)
      {
        arr[i] = arr[i + 1];
      }
      back--;
      return x;
    }
  }
};