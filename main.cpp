#include <iostream>

using namespace std;
int factorial(int n);
int factorial_recursion(int n);
int main()
{
    int num,res,res2;
	cout<<" Enter Number To Find Its Factorial:  ";
	cin>>num;
	res=factorial(num);
	cout<<"Factorial of "<<num<<" is "<< res<<endl;

	res2=factorial_recursion(num);
	cout<<"factorial of "<<num<< " using recursion is "<<res2<<endl;
    return 0;
}

//function using loops to find factorial
//takes one parameter
//return type is integer
int factorial(int n)
{

    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;

}
//function using recursion to find factorial
//takes one parameter
//return type is integer
int factorial_recursion(int n)
{
    if(n==0)
        return 1;
    else
        return n*(factorial_recursion(n-1));
}
