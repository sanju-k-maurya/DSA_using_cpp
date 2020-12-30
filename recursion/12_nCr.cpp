#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int nCr(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r)*fact(n-r);
    
    return num/den;
}

int Recursive_nCr(int n, int r)                   //Recursive approach using Pascal's triangle
{
    if(n==r || r==0)
        return 1;
    return Recursive_nCr(n-1,r-1)+Recursive_nCr(n-1,r);
}

int main()
{
    int n,r;
    cout<<"Enter n and r : ";
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    cout<<Recursive_nCr(n,r)<<endl;

}