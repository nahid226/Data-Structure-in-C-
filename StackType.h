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
        StackType(int size);
        bool IsFull()const;
        bool IsEmpty()const;
        void push(ItemType newItem);
        void pop();
        ItemType Top();
        void printStack();
        ~StackType();


    protected:

    private:
        int top;
        int maxStack;
        ItemType* items;

};

#endif // STACKTYPE_H
