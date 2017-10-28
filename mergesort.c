#include<stdio.h>
#include<limits.h>
void  sort(int arr1[],int arr2[],int size,int mid,int arr[]);
void merge(int arr[],int size)
{
	int mid;
	if(size<=1)
		return;
	int i,leftarr[10001],rightarr[10001];
	mid=size/2;
	for(i=0;i<mid;i++)
	{
		leftarr[i]=arr[i];
	}
	leftarr[mid]=INT_MAX;
	for(i=0;i<(size-mid);i++)
	{
		rightarr[i]=arr[mid+i];
	}
	rightarr[i]=INT_MAX;
	merge(leftarr,mid);
	merge(rightarr,size-mid);
	sort(leftarr,rightarr,size,mid,arr);
}
void  sort(int arr1[],int arr2[],int size,int mid,int arr[])
{
	int i=0,j=0;
	while(i<mid || j<(size-mid))
	{
		if(arr1[i]<arr2[j])
		{
			arr[i+j]=arr1[i];
			i++;
		}
		else
		{
			arr[i+j]=arr2[j];
			j++;
		}
	}
}
int main()
{
	int i,n,arr[1000001];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge(arr,n);
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}
