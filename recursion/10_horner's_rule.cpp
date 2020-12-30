#include<iostream>
using namespace std;

double e(int x, int n)           //Recursive approach
{
    static double s;
    if(n==0)
        return s;
    s=1+ x*s/n;
    return e(x, n-1);
}

double e_iterative(int x, int n)    //Iterative approach
{
    double s=1;
    int i;
    double num=1;
    double den = 1;

    for(i=1;i<=n;i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }

    return s;
}

int main()
{
    int x,n;
    cout<<"Enter x and n : ";
    cin>>x>>n;

    cout<<e(x,n)<<endl;

    cout<<e_iterative(x,n)<<endl;


    return 0;
}