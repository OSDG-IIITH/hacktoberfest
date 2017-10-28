#include <stdio.h>
int main()
{
	int a[10],i;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}

	int b[21]={0};

	for(i=0;i<10;i++)
	{
		b[a[i]]++;
	}

	for(i=0;i<20;i++)
	{
		b[i+1]=b[i]+b[i+1];
	}

	int c[10];

	for(i=9;i>=0;i--)
	{
		if(b[a[i]]!=0)
		{
			c[b[a[i]]-1]=a[i];
			b[a[i]]--;
		}	
	}

	for(i=0;i<10;i++)
	{
		printf("%d ",c[i]);
	}

	return 0;
}
