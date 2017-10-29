#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[105]={0},k,t,i;
	scanf("%d",&k);
	for(i=0;i<k;i++)
        {
                scanf("%d",&t);
                a[t-1]=1;
                n--;
        }
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&t);
		if(!(a[t-1]))
			n--;
	}
	if(n)
		printf("Oh, my keyboard!");
	else
		printf("I become the guy.");
	return 0;
}
