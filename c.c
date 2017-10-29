#include <stdio.h>
int main()
{
	int n,q,i,j,k,l;
	scanf("%d %d",&n ,&q);
	int a[n];
	for(l=0;l<n;l++)
	{
		scanf("%d",&a[l]);
	}
	while(q--)
	{
		scanf("%d %d %d",&i ,&j ,&k);
		for(l=i;l<=j;l++)
			a[l]+=k;
	}
	for(l=0;l<n;l++)
	printf("%d ",a[l]);
	
	return 0;
}
