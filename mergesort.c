#include<stdio.h>
int a[100],b[100];
void merge(int l,int r,int mid)
{
	int i=l;
	int j=mid+1;
	int k=0;
	while(i<=mid && j<=r)
	{
		if(a[i]>a[j])
		{
			b[k]=a[j];
			j++;
			k++;
		}
		else 
		{
			b[k]=a[i];
			k++;
			i++;
		}
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;
		k++;
	}
	while(j<=r)
	{
		b[k]=a[j];
		j++;
		k++;
	}
	for(i=0;i<k;i++)
	{
		a[l+i]=b[i];
	}
}
void mergesort(int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(l,mid);
		mergesort(mid+1,r);
		merge(l,r,mid);
	}
}
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

