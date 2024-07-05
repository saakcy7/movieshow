#ifndef stack_h
#define stack_h
class stack
{

public:
    virtual void push(int data) = 0;
    virtual bool pop(int &value) = 0;
    virtual bool top(int &value) = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void traverse() = 0;
};

#endif