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
    public:
        StackType();
        bool IsFull()const;
        bool IsEmpty()const;
        void push(ItemType newItem);
        void pop();
        ItemType Top();
        void printStack();


    protected:

    private:
        int top;
        ItemType items[MAX_ITEMS];

};

#endif // STACKTYPE_H
