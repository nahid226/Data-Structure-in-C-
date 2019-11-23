#include "StackType.h"
#include<iostream>
using namespace std;

StackType::StackType(int size)
{
    maxStack = size;
    items = new ItemType[maxStack];
    top = -1;
}
bool StackType::IsEmpty() const
{
    return (top==-1);

}
bool StackType::IsFull() const
{
    return (top== maxStack - 1);

}

void StackType::push(ItemType newItem)
{
    if(IsFull())
        throw FullStack();
    top = top + 1;
    items[top] = newItem;
}
void StackType::pop()
{
    if(IsEmpty())
        throw EmptyStack();
    top = top - 1;
}
ItemType StackType::Top()
{
    if(IsEmpty())
        throw EmptyStack();
    return items[top];
}
void StackType::printStack()
{
    for(int i=0;i<=top;i++)
    {
        items[i].printItem();
    }
    cout<<endl;
}

StackType::~StackType()
{
    delete [] items;
}
