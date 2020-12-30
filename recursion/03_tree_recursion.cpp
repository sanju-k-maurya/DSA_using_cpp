#include<iostream>
using namespace std;

void fun(int n)             //Tree recursion - function calling itself more than one time.
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}

int main()
{
    int x;
    cout<<"Enter x :";
    cin>>x;
    fun(x);
    return 0;
}
