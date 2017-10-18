#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int arr[n],i,count=0;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]>=arr[k-1] && arr[i]!=0)
			count++;
	}

	printf("%d\n",count);
	return 0;
}
