#include <iostream>

using namespace std;
int fib(int n);
int fib_recursion(int n);
int main()
{
    int number;
    cout<<"Enter the Number to find fibonacci :"<<endl;
    cin>>number;

    cout<<"Fibonacci series using loops :"<<endl;
    cout<<fib(number);

    /*cout<<endl;

    cout<<"Fibonacci series using recursion :"<<endl;
    for(int i=0;i<number;i++)
    {
        cout<<fib_recursion(i)<<" "; //calling recursive function
    }
    */



    return 0;
}
//function using recursion to find fibonacci series
//takes one parameter
//return type is integer

int fib(int n)
{
    int first=0,second=1;
    int nextterm=0;
    cout<<"0"<< " 1"<<" ";
    for(int i=2;i<=n-2;++i)
    {
        nextterm=first+second;
        cout<<nextterm<<" ";
        first=second;
        second=nextterm;
    }
}

//function using loops to find fibonacci series
//takes one parameter
//return type is integer
int fib_recursion(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fib_recursion(n-1)+fib_recursion(n-2));

}
