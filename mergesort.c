#include<stdio.h>

void merge(int a[],int begin, int mid,int end)
{
	int i=begin,j=mid+1;
	int temp[10000];
	int k=begin;
	while(i<=mid && j<=end)
	{
		if(a[i]>a[j])
			temp[k++]=a[j++];		
		else
			temp[k++]=a[i++];
		
	}		
	while(i<=mid)
		temp[k++]=a[i++];
	while(j<=end)
		temp[k++]=a[j++];
	for(i=begin; i<=end; i++)
	{
		a[i]=temp[i];
	}
	return;
}

void mergesort(int arr[], int b, int c)/*c is the INDEX(with zero based indexing) upto which sorting is to occur*/
{
	if(c-b<1)
		return;
	mergesort(arr,b, (b+c)/2);
	mergesort(arr,(b+c)/2+1,c);
	merge(arr, b, (b+c)/2, c);
}
int main()
{
	int arr[10000];
	int n, i, j ,k;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	mergesort(arr,0,n-1);
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
