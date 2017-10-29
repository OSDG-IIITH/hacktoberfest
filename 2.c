#include<stdio.h>
int main()
{
	int n,i,c=0;
	scanf("%d",&n);
	int a[n],countpos[1000005]={0},countneg[1000005]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if (a[i]>=0)		
			countpos[a[i]]++;
		else 
			countneg[-(a[i])]++;

	}
	for(i=0;i<1000005;i++)
	{
		if (countpos[i]>=2)
			c++;
		if (countneg[i]>=2)
			c++;
	}
	printf("%d\n",c);
	return 0;
}

