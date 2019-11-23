#include <iostream>
#include "ItemType.h"
#include "StackType.h"
using namespace std;

int main()
{
    StackType s1;
    ItemType i1,i2,i3,i4,i5;
    i1.initialize(10);
    i2.initialize(20);
    i3.initialize(30);
    i4.initialize(40);
    i5.initialize(50);

    s1.push(i1);
    s1.push(i2);
    s1.push(i3);
    s1.push(i4);
    s1.push(i5);

    s1.printStack();
    if(s1.IsFull())
        cout<<"stack is full" <<endl;
    else
        cout<<"Stack is not full"<<endl;
    s1.pop();

    s1.printStack();

    ItemType i6 = s1.Top();
    cout<<"Top :" ;
    i6.printItem();

    return 0;
}
