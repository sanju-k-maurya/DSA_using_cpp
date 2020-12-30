#include<iostream>
using namespace std;

int power(int m, int n)
{
    if(n==0)
        return 1;
    return power(m, n-1)*m;

}

int power_2(int m, int n)            //power function with less number of multiplication.
{
    if(n==0)
        return 1;
    if(n%2==0)
        return power_2(m*m, n/2);
    return m*power_2(m*m, (n-1)/2);

}

int main()
{
    int x, y;
    cout<<"Enter x and y : ";
    cin>>x>>y;
    int p = power(x,y);
    cout<<p<<endl;

    int fast_power = power_2(x,y);
    cout<<fast_power<<endl;
    return 0;
}