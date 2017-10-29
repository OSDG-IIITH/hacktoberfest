#include<stdio.h>

int triangle_check(int a, int b, int c)
{
		if(a+b>c)
		{
			if(a+c>b)
			{
				if(b+c>a)
					return 1;
				else return 0;
			}
			else return 0;
		}
		else return 0;
}	
	
int main()
{
	int n,i,test;
	scanf("%d",&n);
	int arra[n],arrb[n],arrc[n];
	for(i=0;i<n;i++)
		scanf("%d",&arra[i]);
	for(i=0;i<n;i++)
                scanf("%d",&arrb[i]);
	for(i=0;i<n;i++)
                scanf("%d",&arrc[i]);
	for(i=0;i<n;i++)
	{
		if(triangle_check(arra[i], arrb[i], arrc[i])==1)
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

