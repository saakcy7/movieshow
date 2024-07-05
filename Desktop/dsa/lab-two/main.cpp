#include <iostream>
#include "stack.h"
#include "Linkedliststack.h"
#include "Arraystack.h"
using namespace std;
int main()
{

     cout << "--------------------------------------" << endl;

     cout << "Stack Implementation" << endl;
     cout << "--------------------------------------" << endl;

     // creating a stack that can hold float values.
     stack *s = new Linkedliststack();
     int value;
     // checking if the stack is empty
     if (s->isEmpty())
     {
          cout << "Stack is empty" << endl;
     }
     else
     {
          cout << "Stack is not empty";
     }
     cout << endl
          << endl;

     cout << "Pushing data into the stack" << endl;
     s->push(1);
     // getting the value at the top of the stack
     if (s->top(value))
     {
          cout << "Top of the stack is : " << value << endl;
     }
     cout << "--------------------------------------" << endl;

     cout << "Pushing data into the stack" << endl;
     s->push(2);
     s->push(3);
     cout << "The elements in the stack are:" << endl;
     s->traverse();

     // poping the top of the stack
     s->pop(value);
     cout << "The popped element from the stack is :" << value << endl;
     s->push(4);
     s->push(5);
     s->push(6);
     s->push(7);
     cout<<"The elements in the stack are"<<endl;
     s->traverse();

     s->pop(value);
     cout << "The popped element from the stack is :" << value << endl;

     s->push(8);
     s->push(9);
     s->push(10);
     s->push(11);
     cout<<"The elements in the stack are"<<endl;
     s->traverse();
     s->pop(value);
     cout << "The popped element from the stack is :" << value << endl;

     s->push(12);
     s->push(13);
     s->push(14);
     s->push(15);
     cout<<"The elements in the stack are"<<endl;
     s->traverse();


     s->push(12);
     s->push(13);
     s->push(14);
     s->push(15);
     cout<<"The elements in the stack are"<<endl;
     s->traverse();
}