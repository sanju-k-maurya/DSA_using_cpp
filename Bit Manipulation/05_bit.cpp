//https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
//Given a positive integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.
#include<iostream>
using namespace std;

bool isPowerofTwo(long long n)
{
    if(n==0)
        return false;
    else if(n==1)
    {
        return true;
    }
    else
    {
        long long two_power = 2;
        while(n>=two_power)
        {
            if(n==two_power)
                return true;
            two_power = two_power<<1;
        }
        return false;
    }
}
bool isPowerofTwo_2(long long n)
{
    if((n & (n-1))==0 && n)
        return true;
    else
    {
        return false;
    }
    
}
int main()
{
    long long n;
    cin>>n;
    cout<<isPowerofTwo(n)<<endl;
    cout<<isPowerofTwo_2(n)<<endl;
    return 0;
}
