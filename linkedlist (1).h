#pragma once
#include "Node.h"
class linkedlist
{
    Node *First;
    Node * Last;
    public:
    linkedlist()
    {
        First=0;
        Last=0;
    }
    void Insert(int n);
    void Insert_At_Start(int a);
    void Display();
    void Delete();
    int Count();
    void largest();
    void minimum();
    void deletenode();
};