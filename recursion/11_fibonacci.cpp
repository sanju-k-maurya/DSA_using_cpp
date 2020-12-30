#include<iostream>
using namespace std;

int Ifib(int n)                      //Using iteration
{
    int t0 = 0, t1 = 1, s=0, i;

    if(n<=1) return n;

    for(i=2;i<=n;i++)
    {
        s = t0+t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

int Rfib(int n)                   //Recursion
{   
    if(n<=1) return n;
    return Rfib(n-2)+Rfib(n-1);

}

int F[100];
int Mfib(int n)                 //Memoization
{
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1) 
            F[n-2] = Mfib(n-2);
        if(F[n-1]==-1)
            F[n-1] = Mfib(n-1);
        F[n] = F[n-2]+F[n-1];
        return F[n-2]+F[n-1];

    }
        
}

int main()
{
    int i;
    for(i=0;i<100;i++)
        F[i]=-1;

    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<Ifib(n)<<endl;
    cout<<Rfib(n)<<endl;
    cout<<Mfib(n)<<endl;
    return 0;
}