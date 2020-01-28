//Bubble sort.
#include<iostream>
using namespace std;
int *bubble_sort(int *arr,int n)
{
	for(int i=1;i<n;i++)
	{	int flag=0;
		for(int j=1;j<n-i+1;j++)
		{
			if(arr[j]<arr[j-1])
			{
				int temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
				flag=1;
			}
			
		}
		if(flag==0)
			break;
	}
}
int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int a[n];
	cout<<"Enter elements of array: \n";
	for(int i=0;i<n;i++)
		cin>>a[i];

	bubble_sort(a,n);

	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
