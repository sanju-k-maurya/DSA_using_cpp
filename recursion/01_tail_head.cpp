#include<iostream>
using namespace std;

void fun_tail(int n)          //Tail Recursion
{
    if(n>0)
    {
        cout<<n<<" ";
        fun_tail(n-1);         //from n to 1
    }
}

void fun_head(int n)          //Head Recursion
{
    if(n>0)
    {
        fun_head(n-1);       //from 1 to n
        cout<<n<<" ";
        
    }
}

int main()
{
    int x;
    cout<<"Enter n : ";  
    cin>>x;
    fun_tail(x);
    cout<<endl;
    fun_head(x);
    
    return 0;
}
