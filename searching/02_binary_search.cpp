#include<iostream>
using namespace std;

struct Array
{
    int a[10];
    int size;           //capacity
    int length;         //current length

};

void display(struct Array arr)
{
    int i;
    cout<<"Elements are : \n";
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.a[i]<<" ";

    }
}

int Binary_search(struct Array arr, int key)            //iterative binary search
{
    int l,mid,h;
    l=0;
    h=arr.length-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.a[mid])
            return mid;
        else if(key<arr.a[mid])
            h=mid-1;
        else
        {
            l=mid+1;
        }
        
    }

    return -1;
}

int R_Binary_search(int a[], int l,int h,int key)   //recursive binary search
{
    int mid;

    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return R_Binary_search(a,l,mid-1,key);
        else
        {
            return R_Binary_search(a,mid+1,h,key);
        }
        
    }
    return -1;
}

int main()
{
    struct Array arr={{2,3,4,5,6},10,5};

    //cout<<Binary_search(arr,10);
    cout<<R_Binary_search(arr.a,0,arr.length,9);
    cout<<endl;
    display(arr);
    return 0;
}
