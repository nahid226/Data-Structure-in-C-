#include "StackType.h"
#include<iostream>
using namespace std;

StackType::StackType()
{
    topptr = NULL;
}
bool StackType::IsEmpty() const
{
    return (topptr==NULL);

}
bool StackType::IsFull() const
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }

}

void StackType::push(ItemType newItem)
{
    if(IsFull())
        throw FullStack();
    else
    {
        NodeType* location = new NodeType;
        location->info = newItem;
        location->next = topptr;
        topptr = location;
    }
}
void StackType::pop()
{
    if(IsEmpty())
        throw EmptyStack();

    else
    {
        NodeType* tempptr;
        tempptr = topptr;
        topptr = topptr ->next;
        delete tempptr;
    }
}
ItemType StackType::Top()
{
    if(IsEmpty())
        throw EmptyStack();
    return topptr->info;
}
void StackType::printStack()
{
    NodeType* head;
    head=topptr;
    while(head!=NULL)
    {
        head->info.printItem();
        head=head->next;
    }
    cout<<endl;
}

StackType::~StackType()
{
    NodeType* tempptr;
    while(tempptr != NULL)
    {
        tempptr = topptr;
        topptr = topptr ->next;
        delete tempptr;
    }
}
