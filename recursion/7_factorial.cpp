#include<iostream>
using namespace std;

int fact(int n)              //Recursion
{
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int Ifact(int n)               //Iteration
{
    int f=1;
    int i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int x;
    cout<<"Enter x : ";
    cin>>x;

    int r = fact(x);
    cout<<r<<endl;

    int I_fact = Ifact(x);
    cout<<I_fact<<endl;

    return 0;
}