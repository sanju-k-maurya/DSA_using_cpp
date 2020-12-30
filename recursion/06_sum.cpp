#include<iostream>
using namespace std;

int sum(int n)                  //Recursive Function
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

int Isum(int n)                  //Iterative version 
{
    int s=0;
    int i;
    for(i=1;i<=n;i++)
        s=s+i;
    return s;

}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    int s = sum(n);
    cout<<s<<endl;

    int i_sum = Isum(n);
    cout<<i_sum<<endl;

    return 0;
}
