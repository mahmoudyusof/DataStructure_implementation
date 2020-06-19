class Stack
{
private:
  int *st;
  int s;
  int top;

public:
  Stack(int size);

  ~Stack();

  void push(int value);

  int pop();

  int peak();

  bool isEmpty();
  bool isFull();
};