#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>0)                //Here n is local variable.
    {
        return fun(n-1)+n;
    }
    return 0;
}

int fun2(int n)
{
    static int x=0;        //Here x is static variable.
    if(n>0)                
    {
        x++;
        return fun2(n-1)+x;
    }
    return 0;
}

int y=0;                   //Here y is global variable.

int fun3(int n)
{
    if(n>0)
    {
        y++;
        return fun3(n-1)+y;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int l = fun(n);                //working of local variable.
    cout<<l<<endl; 

    int s = fun2(n);              //call to illustrate static variable
    cout<<s<<endl;

    int g;
    g = fun3(n);                  //call to illustrate global variable
    cout<<g<<endl;

    g = fun3(n);
    cout<<g<<endl;

    return 0;
}
