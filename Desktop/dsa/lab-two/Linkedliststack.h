#ifndef Linkedliststack_h
#define Linkedliststack_h
#include "linkedlist.h"
#include "stack.h"

class Linkedliststack : public stack
{
public:
    Linkedliststack() : top_index(1){};
    ~Linkedliststack();
    void push(int data);
    bool pop(int &value);
    bool top(int &value);
    bool isEmpty();
    bool isFull();
    void traverse();

private:
    Linkedlist list;
    int top_index;
};
#endif