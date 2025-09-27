#include <iostream>
#include "linkedlist.h"
using namespace std;
void linkedlist :: Insert(int n)
{
    Node * temp;
    temp=new Node;
    temp->data=n;
    temp->next=0;
    if(First==0)
    {
        First=temp;
        Last=temp;
    }
    else
    {
        Last->next=temp; // pointer assignment
        Last=temp; // pointer assignment
    }
}
void linkedlist :: Insert_At_Start(int a)
{
    Node *temp;
    temp=new Node;
    temp->data=a;
    temp->next=0;
    if(First==0)
    {
        First=temp;
        Last=temp;
    }
    else
    {
        temp->next=First;
        First=temp; // pointer assignment
    }
}
void linkedlist :: Display()
{
    Node *temp=First;
    while(temp !=0)
    {
        cout<<"data of the nodes :"<<temp->data<<endl;
        temp=temp->next;
    }
}
void linkedlist::Delete()
{
    if(First==0)
        cout<<"deletion is not possible"<<endl;
    Node * temp;
    temp=First;
    First=temp->next;
    delete temp;
    if(First==0)
        Last=0;
    Display();
}
int linkedlist::Count()
{
    Node *temp=First;
    int count=0;
    while(temp !=0)
    {
        count++;
        temp=temp->next;
    }
    cout<<"the number of nodes is:"<<count<<endl;
    return count;
}
void linkedlist :: largest()
{
    Node * temp=First;
    int max=temp->data;
    temp=temp->next;
    while(temp !=0)
    {
        if(max<temp->data)
            max=temp->data;
        temp=temp->next;
    }
    cout<<"largest value:"<<max<<endl;
}
void linkedlist :: minimum()
{
    Node * temp=First;
    int min=temp->data;
    temp=temp->next;
    while(temp !=0)
    {
        if(min>temp->data)
            min=temp->data;
        temp=temp->next;
    }
    cout<<"minimum value:"<<min<<endl;
}
void linkedlist :: deletenode()
{
    if(First==0)
        cout<<"the list is empty and node can't be deleted"<<endl;
    else
    {
        if(First==Last)
        {
            delete First;
            Last=0;
        }
        else
        {
            Node * temp=First;
            Node * prev=First;
            while(temp !=Last)
            {
                prev=temp;
                temp=temp->next;
            }
            delete Last;
            Last=prev;
            Last->next=0;
        }
    }
}