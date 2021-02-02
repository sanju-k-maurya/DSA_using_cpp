//https://practice.geeksforgeeks.org/problems/set-bits0143/1
//Given a positive integer N, print count of set bits in it.
#include<iostream>
using namespace std;

int set_bits2(int n)      //Takes O(log n) time.
{
    int count2=0;
    while(n>0)
    {
        if((n & 1)==1)
            count2++;
        n=n>>1;
        
    }
    return count2;
}

int set_bits(int n) //Brian Karnighan Algorithm O(no. of set bits)
{
    int count=0;
    while(n>0)
    {
        n = (n & (n-1));
        count++;
    }

    return count;

}

int main()
{
    int n;
    cin>>n;
    cout<<set_bits(n)<<endl;
    cout<<set_bits2(n)<<endl;
    return 0;
}
