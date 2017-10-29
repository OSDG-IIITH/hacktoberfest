#include<stdio.h>
int b[25];
int main()
{
	unsigned long long int i,j,k,n,sum;
	int flag=0;
	scanf("%llu%llu",&n,&k);
unsigned long long int a[n];
	

	for(i=0;i<n;i++)
	{
		scanf("%llu",&a[i]);
		
	}

	for(i=1;i<(1<<n);i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			if(i&(1<<j)==(1<<j))
			{
				sum=sum+a[j];
			}
		
			if(sum==k)
			{
				flag=1;
				break;
			}

		}
		
		if(flag==1)
				break;
	}
if(flag==1)
{printf("yes");}
else
{printf("no");}
return 0;
}
