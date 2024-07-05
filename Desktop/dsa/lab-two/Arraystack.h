#ifndef Arraystack_h
#define Arraystack_h
#include "linkedlist.h"
#include "stack.h"
#define MAX_SIZE 15
class Arraystack : public stack
{
public:
  Arraystack();
  ~Arraystack();
  void push(int data);
  bool pop(int &data);
  bool top(int &data);
  bool isEmpty();
  bool isFull();

private:
  int arr[MAX_SIZE];
  int top_index;
};
#endif