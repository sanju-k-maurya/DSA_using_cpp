#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>100)
        return n-10;  
    return fun(fun(n+11));     //Nested Recursion - recursive call paremeter is function itself.
}
int main()
{
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int r = fun(x);
    cout<<r<<endl;

    return 0;
}
