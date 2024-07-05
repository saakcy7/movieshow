#include "linkedlist.h"
#include <iostream>

Node::Node(int d) {
    info = d;
    next = nullptr;
}

Linkedlist::Linkedlist() {
    head = nullptr;
    tail = nullptr;
}

bool Linkedlist::isEmpty() {
    if(head==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Linkedlist::addToHead(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    if(tail==NULL)
    {
        tail=head;
    }
}

void Linkedlist::addToTail(int data) {
    Node* newNode = new Node(data);
    if (isEmpty()) {
        head = newNode;
        return;
    }
    else{
        newNode->info=data;
        newNode->next=NULL;
        tail->next=newNode;
        tail=tail->next;
    }
}

void Linkedlist::add(int data, Node* predecessor) {
    if (predecessor == nullptr) {
        std::cout << "Predecessor node cannot be null" << std::endl;
        return;
    }
    else{
    Node* newNode = new Node(data);
    newNode->info=data;
    newNode->next = predecessor->next;
    predecessor->next = newNode;
    }
}

void Linkedlist::removeFromHead() {
    if (isEmpty()) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    Node* NTD = head;
    head = head->next;
    delete NTD;
}

void Linkedlist::remove(int data) {
    if(isEmpty())
    {std::cout << "List is empty" << std::endl;
        return;
    }
    else{
        if(head->info==data)
        {
            removeFromHead();
        }
        else
        {
            Node* temp=head->next;
            Node* prev=head;
            while(temp!=NULL)
            {
                if(temp->info==data)
                {
                    break;
                }
                else
                {
                    prev=prev->next;
                    temp=temp->next;
                }
            }
            if(temp!=NULL)
            {
                prev->next=temp->next;
                delete temp;
                if(prev->next==NULL)
                {
                    tail=prev;
                }
            }
        }
    }
}

bool Linkedlist::search(int data)
  {
        Node *p = head;
        while (p != NULL)
        {
            if (p->info == data)
            {
                std::cout << "\n Data Found ! " << std::endl;
                return true;
            }
            else{
            std::cout<<"data not found"<<std::endl;
            return false;
            }
            p = p->next;
         
        }
  }

bool Linkedlist::retrieve(int data, Node **ptr)
{
    Node *p = head;
    while (p != NULL && p->info != data)
    {
        p = p->next;
    }

    if (p == NULL)
    {
        return false;
    }
    else
    {
        *ptr = p;
        return true;
    }
}

void Linkedlist::traverse() {
    Node* p= head;
    while (p != nullptr) {
        std::cout << p->info << std::endl;
        p=p->next;
    }
}