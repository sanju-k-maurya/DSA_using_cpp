//You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.
#include<iostream>
using namespace std;

int count_setbits(int n)
{
    int count=0;
    while(n >0)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}
int count_flipped(int a, int b)
{
    int flipped = a^b;


    return count_setbits(flipped);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<count_flipped(a,b)<<endl;
    return 0;
}
