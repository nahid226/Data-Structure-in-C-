#include <iostream>
#include "StackType.h"
#include "ItemType.h"

using namespace std;

int main()
{
    StackType s1;
    ItemType i1,i2,i3,i4,i5;
    i1.initialize(10);
    i2.initialize(30);
    i3.initialize(12);
    i4.initialize(90);
    i5.initialize(23);

    s1.push(i2);
    s1.push(i1);
    s1.push(i5);

    s1.printStack();
    if(s1.IsFull())
        cout<<"stack is full"<<endl;
    else
        cout<<"stack is not full"<<endl;
    s1.push(i3);
    s1.push(i4);
    s1.printStack();
    if(s1.IsFull())
        cout<<"stack is full"<<endl;
    else
        cout<<"stack is not full"<<endl;

    s1.pop();
    s1.printStack();
    if(s1.IsFull())
        cout<<"stack is full"<<endl;
    else
        cout<<"stack is not full"<<endl;
    ItemType i6;
    i6 = s1.Top();
    cout<<"top :";
    i6.printItem();


    return 0;
}
