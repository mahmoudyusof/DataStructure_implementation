#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Queue
{
private:
  int front = -1;
  int back = -1;
  int size;
  T *arr;

public:
  Queue(int s)
  {
    size = s;
    arr = new T[size];
  }

  ~Queue()
  {
    delete[] arr;
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

  void enqueue(T val)
  {
    if (isFull())
      throw "Queue is full";
    if (isEmpty())
      front = back = 0;
    else
      back++;

    arr[back] = val;
  }

  T dequeue()
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
      T x = arr[front];
      for (int i = 0; i < back; i++)
      {
        arr[i] = arr[i + 1];
      }
      back--;
      return x;
    }
  }
};