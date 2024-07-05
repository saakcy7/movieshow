#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
public:
    int info;
    Node* next;
    Node(int d);
};

class Linkedlist {
public:
    Node* head;
    Node* tail;
    
public:
    Linkedlist();
    ~Linkedlist();
    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node* predecessor);
    void removeFromHead();
    void remove(int data);
    bool retrieve(int data,Node** ptr);
    bool search(int data);
    void traverse();
};

#endif