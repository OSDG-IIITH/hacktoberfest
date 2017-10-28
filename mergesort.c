#include <stdio.h>
#include <limits.h>
void merge(int a[], int l, int r);
void mergesort(int a[], int l, int r)
{
	int mid=(l+r)/2;
	if(l<r)
	{
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,r);
	}
}
void merge(int a[], int l, int r)
{
	int a1[100000]={0}, a2[100000]={0}, i, j=0, k=0, mid;
	mid=(l+r)/2;
	for(i=l;i<=mid;i++)
	{
		a1[j]=a[i];
		j++;
	}
	a1[j]=INT_MAX;
	j=0;
	for(i=mid+1;i<=r;i++)
	{
		a2[j]=a[i];
		j++;
	}
	a2[j]=INT_MAX;
	j=0;
	k=0;
	for(i=l;i<=r;i++)
	{
		if(a1[j]>a2[k])
		{
			a[i]=a2[k];
			k++;
		}
		else
		{
			a[i]=a1[j];
			j++;
		}
	}
}
int main()
{
        int n, a[10000],i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        mergesort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
        return 0;
}

