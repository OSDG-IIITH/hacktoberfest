#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&m,&n);
	int a[n];
	int i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				int swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
	}
	k=a[n-1]-a[0];
	for(i=0;i<n-m+1;i++)
	{
		if((a[i+m-1]-a[i])<k)
			k=a[i+m-1]-a[i];
	}
	printf("%d",k);
}
