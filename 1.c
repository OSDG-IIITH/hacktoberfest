#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n],i;
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n;i++)
		scanf("%d",&b[i]);
	for (i=0;i<n;i++)
		scanf("%d",&c[i]);
	for(i=0;i<n;i++)
	{
		if (a[i]+b[i]>c[i] && a[i]+c[i]>b[i] && b[i]+c[i]>a[i])
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}



