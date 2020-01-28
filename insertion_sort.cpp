//INSERTION SORT
#include<iostream>
using namespace std;
int *insertion_sort(int *arr,int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(arr[j]<arr[j-1])
			{
				int temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
			else
				break;
		}
	}
	return arr;
}

int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of array: \n";
	for(int i=0;i<n;i++)
		cin>>a[i];

	insertion_sort(a,n);
	cout<<"\n";
	cout<<"After Sorting:\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
	return 0;
}