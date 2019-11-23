#include <iostream>
#include "ItemType.h"
#include "StackType.h"
using namespace std;

int main()
{
    StackType s1(10);
    ItemType i1,i2,i3,i4,i5,i6,i7,i8,i9,i0;
    i1.initialize(9);
    i2.initialize(8);
    i3.initialize(7);
    i4.initialize(6);
    i5.initialize(5);
    i6.initialize(4);
    i7.initialize(3);
    i8.initialize(2);
    i9.initialize(1);
    i0.initialize(10);

    s1.push(i9);
    s1.push(i8);
    s1.push(i7);
    s1.push(i6);
    s1.push(i5);
    s1.push(i4);
    s1.push(i3);
    s1.printStack();
    if(s1.IsFull())
        cout<<"stack is full"<<endl;
    else
        cout<<"stack is not full"<<endl;
    s1.push(i2);
    s1.push(i1);
    s1.push(i0);
    s1.printStack();
    if(s1.IsFull())
        cout<<"stack is full"<<endl;
    else
        cout<<"stack is not full"<<endl;
    ItemType i11 = s1.Top();
    cout<<"Top: " ;
    i11.printItem();
    cout<<endl;

    s1.pop();
    s1.printStack();
    if(s1.IsFull())
        cout<<"stack is full"<<endl;
    else
        cout<<"stack is not full"<<endl;
    return 0;
}
