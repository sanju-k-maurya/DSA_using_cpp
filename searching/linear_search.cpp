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

void swap(int *x, int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}

int t_linear_search(struct Array *arr, int key)  //transposition   
{
    int i;
    if(key==arr->a[0])
        return 0;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->a[i])
        {
            swap(&arr->a[i], &arr->a[i-1]);
            return i;
        }    
    }
    return -1;
}

int mth_linear_search(struct Array *arr, int key)  //move to head or move to front   
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->a[i])
        {
            swap(&arr->a[i], &arr->a[0]);
            return i;
        }    
    }
    return -1;
}

int linear_search(struct Array arr, int key)   //linear search
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.a[i])
            return i;
    }
    return -1;
}

int main()
{
    struct Array arr={{2,3,4,5,6},10,5};

    cout<<t_linear_search(&arr,3);
    cout<<endl;
    display(arr);
    return 0;
}