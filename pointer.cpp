#include <iostream>

using namespace std;
struct moneyType{
    int dollar;
    int cents;
    moneyType *t;
};
int main()
{
    /*int x,*px,**ppx;
    px=&x;
    *px=30;
    ppx=&px;
    **ppx=40;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<**ppx<<endl;
    cout<<x<<endl;
    cout<<&px<<endl;
    cout<<ppx<<endl;
    */
    /*
    //static declaration
    moneyType a;
    a.cents=10;
    a.dollar=20;
    cout<<a.cents<<endl;

    cout<<a.dollar<<endl;
    */
    moneyType *a=new moneyType;
    moneyType *b=new moneyType;
    moneyType *c=new moneyType;
    a->cents=20;
    b->cents=10;
    c->dollar=30;
    a->t=b;
    b->t=c;
    cout<<a->t->cents<<endl;
    cout<<b->t->dollar<<endl;
    cout<<a->cents<<endl;
    cout<<b->dollar<<endl;

}
