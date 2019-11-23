#ifndef STACKTYPE_H
#define STACKTYPE_H
#include "ItemType.h"

class FullStack
{

};
class EmptyStack
{

};
class StackType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
    public:
        StackType();
        bool IsFull()const;
        bool IsEmpty()const;
        void push(ItemType newItem);
        void pop();
        ItemType Top();
        void printStack();
        ~StackType();


    protected:

    private:
        NodeType* topptr;

};

#endif // STACKTYPE_H
